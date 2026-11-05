#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int nid;
    struct Node * next;
};

void showNodes (struct Node * s)
{
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
            p = s;
            r = s->next;
            q = s->next->next;
            p->next = q;
            free(r);
            break;
        }
        s = s->next;
        i++;
    }
}


int main() {
    // Write C code here

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

    int pd = 5;

    deleteNode (pd, s);
    printf ("\n");

    showNodes (s);



    return 0;
}
