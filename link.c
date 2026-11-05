#include<stdio.h>
#include<stdlib.h>

struct node
{
    int nid;
    struct node*next;
};
int main()
{
    struct node *start,*p,*c;
    int i=1;
    while(1)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->nid);
        p->next=NULL;
        if(p->nid<0)
            break;
        if(i==1)
        {
            start=p;
            c=p;
            i++;

        }
        else
        {
            c->next=p;
            c=p;
        }
    }
    printf("\n");
    p=start;
    int f=5;
    while(p!=NULL)
    {
        printf("%d",p->nid);
        p=p->next;
    }
}

