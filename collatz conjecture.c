#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k,x;
        scanf("%d %d",&k,&x);
        while(k--)
        {
         x=2*x;
        }
        printf("%d\n",x);
    }
}
