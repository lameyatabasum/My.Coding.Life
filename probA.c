#include<stdio.h>
int main()
{
    int t,x,y,n,c,d,f;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d%d",&x,&y,&n);
        if(n%x==y)
        {
            printf("%d",n);
        }
        else if(n%x>y)
        {
            printf("%d",(n-(n%x))+y);
        }
        else
        {
            printf("%d",((n-y)/x)*x+y);
        }
        printf("\n");
    }
}
