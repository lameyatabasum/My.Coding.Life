#include <gtk/gtk.h>
#include <string.h>
#include <ctype.h>

GtkWidget *left_text;
GtkWidget *right_text;
GtkWidget *dropdown;

/* convert text to lowercase */
void to_lower(char *text)
{
    for(int i = 0; text[i]; i++)
        text[i] = tolower(text[i]);
}

/* highlight matched text */
void highlight(GtkTextBuffer *buffer, const char *word)
{
    GtkTextIter start, match_start, match_end;

    gtk_text_buffer_get_start_iter(buffer, &start);

    GtkTextTagTable *table = gtk_text_buffer_get_tag_table(buffer);
    GtkTextTag *tag = gtk_text_tag_table_lookup(table, "highlight");

    if(tag == NULL)
    {
        tag = gtk_text_buffer_create_tag(buffer, "highlight",
                                         "background", "green",
                                         NULL);
    }

    while (gtk_text_iter_forward_search(&start,
                                        word,
                                        GTK_TEXT_SEARCH_TEXT_ONLY,
                                        &match_start,
                                        &match_end,
                                        NULL))
    {
        gtk_text_buffer_apply_tag(buffer, tag, &match_start, &match_end);
        start = match_end;
    }
}

/* WORD LEVEL COMPARISON */
void word_compare(GtkTextBuffer *left_buffer, GtkTextBuffer *right_buffer,
                  char *left_content, char *right_content)
{
    gchar **left_words = g_strsplit(left_content, " ", -1);
    gchar **right_words = g_strsplit(right_content, " ", -1);

    for (int i = 0; left_words[i]; i++)
    {
        if(strlen(left_words[i]) == 0) continue;

        char lw[200];
        strcpy(lw, left_words[i]);
        to_lower(lw);

        for (int j = 0; right_words[j]; j++)
        {
            if(strlen(right_words[j]) == 0) continue;

            char rw[200];
            strcpy(rw, right_words[j]);
            to_lower(rw);

            if(strcmp(lw, rw) == 0)
            {
                highlight(left_buffer, left_words[i]);
                highlight(right_buffer, right_words[j]);
            }
        }
    }

    g_strfreev(left_words);
    g_strfreev(right_words);
}

/* Compare button */
void compare_text(GtkButton *button, gpointer user_data)
{
    GtkTextBuffer *left_buffer =
    gtk_text_view_get_buffer(GTK_TEXT_VIEW(left_text));

    GtkTextBuffer *right_buffer =
    gtk_text_view_get_buffer(GTK_TEXT_VIEW(right_text));

    GtkTextIter start, end;

    /* Clear old highlight */
    gtk_text_buffer_get_bounds(left_buffer, &start, &end);
    gtk_text_buffer_remove_all_tags(left_buffer, &start, &end);

    gtk_text_buffer_get_bounds(right_buffer, &start, &end);
    gtk_text_buffer_remove_all_tags(right_buffer, &start, &end);

    /* Get text */
    gtk_text_buffer_get_bounds(left_buffer, &start, &end);
    char *left_content =
    gtk_text_buffer_get_text(left_buffer, &start, &end, FALSE);

    gtk_text_buffer_get_bounds(right_buffer, &start, &end);
    char *right_content =
    gtk_text_buffer_get_text(right_buffer, &start, &end, FALSE);

    /* ONLY word-level compare */
    word_compare(left_buffer, right_buffer, left_content, right_content);

    g_free(left_content);
    g_free(right_content);
}

/* GTK window */
static void activate(GtkApplication *app, gpointer user_data)
{
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "File comparison");
    gtk_window_set_default_size(GTK_WINDOW(window), 900, 550);

    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 10);

    GtkWidget *top_bar = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 10);

    GtkWidget *spacer = gtk_label_new("");
    gtk_widget_set_hexpand(spacer, TRUE);

    dropdown = gtk_combo_box_text_new();
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(dropdown),
                                   "Word-level Comparison");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(dropdown),
                                   "Sentence-level Comparison");

    gtk_combo_box_set_active(GTK_COMBO_BOX(dropdown), 0);

    GtkWidget *compare_btn =
    gtk_button_new_with_label("Compare");

    g_signal_connect(compare_btn, "clicked",
                     G_CALLBACK(compare_text), NULL);

    gtk_box_append(GTK_BOX(top_bar), spacer);
    gtk_box_append(GTK_BOX(top_bar), dropdown);
    gtk_box_append(GTK_BOX(top_bar), compare_btn);

    GtkWidget *paned = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);

    GtkWidget *left_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    GtkWidget *left_label = gtk_label_new("Original Text");
    left_text = gtk_text_view_new();

    gtk_box_append(GTK_BOX(left_box), left_label);
    gtk_box_append(GTK_BOX(left_box), left_text);

    GtkWidget *right_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    GtkWidget *right_label = gtk_label_new("Changed Text");
    right_text = gtk_text_view_new();

    gtk_box_append(GTK_BOX(right_box), right_label);
    gtk_box_append(GTK_BOX(right_box), right_text);

    gtk_paned_set_start_child(GTK_PANED(paned), left_box);
    gtk_paned_set_end_child(GTK_PANED(paned), right_box);

    gtk_box_append(GTK_BOX(main_box), top_bar);
    gtk_box_append(GTK_BOX(main_box), paned);

    gtk_window_set_child(GTK_WINDOW(window), main_box);
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv)
{
    GtkApplication *app =
    gtk_application_new("com.example.app",
                        G_APPLICATION_DEFAULT_FLAGS);

    g_signal_connect(app, "activate",
                     G_CALLBACK(activate), NULL);

    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);
    return status;
}