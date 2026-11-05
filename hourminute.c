#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        c=(24*60)-(a*60+b);
        printf("\n%d",c);
    }
    printf("\n");
}
