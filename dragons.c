#include<stdio.h>
struct dragons
{
    int a,b;
};
int main()
{
    int s,n;
    scanf("%d%d",&s,&n);
    struct dragons d[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&d[i].a,&d[i].b);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(d[j].a>d[j+1].a)
            {
                struct dragons temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s>d[i].a)
        {
            s=s+d[i].b;
        }
        else
        {
            printf("NO");
            return 0;
        }


    }
     printf("YES");
     return 0;
}
