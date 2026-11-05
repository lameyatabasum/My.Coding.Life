#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int nid;
    struct Node * next;
};

void showNodes (struct Node * s)
{
    printf ("\n");
    while (s != NULL)
    {
        printf (" %d ", s->nid);
        s = s->next;
    }
}

void deleteNode (int pos, struct Node * s)
{
    int i = 1;
    struct Node *p, *r, *q;

    while (s != NULL)
    {
        if (i == pos-1)
        {
            r = s->next;
            s->next = s->next->next;

            free(r);

            /*
            p = s;
            r = s->next;
            q = s->next->next;
            p->next = q;
            free(r);
            */
            break;
        }
        s = s->next;
        i++;
    }
}

void insertNode (int pos, struct Node *p, struct Node *s)
{
    struct Node * s1, *s2, *s3;
    int i = 1;

    while (s != NULL)
    {
        if (i == pos -1)
        {
            /*
            p->next = s->next;
            s->next = p;
            */
            s1 = s;
            s2 = s1->next;
            s1->next = p;
            p->next = s2;
            break;
        }
        i++;
        s = s->next;
    }
}


int main() {

    struct Node *s, *p, *c;
    int n, i = 1;

    while (1)
    {
        scanf ("%d", &n);
        if (n < 0) { break; }
        p = (struct Node *) malloc (sizeof (struct Node));
        p->nid = n;
        p->next = NULL;

        if (i == 1)
        {
            s = p;
            c = p;
            i++;
        }
        else
        {
            c->next = p;
            c = p;
        }
    }
    showNodes (s);

    /*
    int pd = 5;

    deleteNode (pd, s);
    printf ("\n");

    showNodes (s);
    */

    p = (struct Node *) malloc (sizeof (struct Node));
    p->nid = 10;
    p->next = NULL;

    insertNode (4, p, s);



    showNodes (s);



    return 0;
}
