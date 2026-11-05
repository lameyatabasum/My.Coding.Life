#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int p=(n+2)/3;
        int s=3*p-n;
        printf("%d\n",s);
    }
}
