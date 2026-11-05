#include <gtk/gtk.h>

static void activate(GtkApplication *app, gpointer user_data) {

    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "File comparison");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 500);

    // ===== Dark / Light Mode =====
    GtkSettings *settings = gtk_settings_get_default();
    g_object_set(settings, "gtk-application-prefer-dark-theme", TRUE, NULL);
    // TRUE = Dark
    // FALSE = Light

    // ===== Split View =====
    GtkWidget *paned = gtk_paned_new(GTK_ORIENTATION_HORIZONTAL);

    // ---------- Left Side ----------
    GtkWidget *left_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    GtkWidget *left_label = gtk_label_new("Original Text");
    GtkWidget *left_text = gtk_text_view_new();

    gtk_widget_set_hexpand(left_text, TRUE);
    gtk_widget_set_vexpand(left_text, TRUE);

    gtk_box_append(GTK_BOX(left_box), left_label);
    gtk_box_append(GTK_BOX(left_box), left_text);

    // ---------- Right Side ----------
    GtkWidget *right_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    GtkWidget *right_label = gtk_label_new("Changed Text");
    GtkWidget *right_text = gtk_text_view_new();

    gtk_widget_set_hexpand(right_text, TRUE);
    gtk_widget_set_vexpand(right_text, TRUE);

    gtk_box_append(GTK_BOX(right_box), right_label);
    gtk_box_append(GTK_BOX(right_box), right_text);

    // দুই পাশে বসানো
    gtk_paned_set_start_child(GTK_PANED(paned), left_box);
    gtk_paned_set_end_child(GTK_PANED(paned), right_box);

    gtk_window_set_child(GTK_WINDOW(window), paned);

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {

    GtkApplication *app = gtk_application_new("com.example.app", G_APPLICATION_DEFAULT_FLAGS);

    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    int status = g_application_run(G_APPLICATION(app), argc, argv);

    g_object_unref(app);
    return status;
}