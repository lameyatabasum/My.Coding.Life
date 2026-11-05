#include<stdio.h>
int main()
{
    int t;
    int x,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&n);
        if(n%2==0)
            printf("0\n");
        else
            printf("%d\n",x);
    }
}
