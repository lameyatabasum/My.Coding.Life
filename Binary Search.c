#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)b-*(int*)a);}
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    while(q--)
    {
        int x;
        scanf("%d",&x);
        int *found =(int*) bsearch(&x,a,n,sizeof(int),cmp);
        if(found!=0)
            printf("found\n");
        else
           printf("not found\n");

        /*int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                printf("found\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("not found\n");*/

    }
}
