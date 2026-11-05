#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
    int a;
    scanf("%d",&a);
    int count=0;
    int d=a%10;
    while(a>0)
    {
        int c=a%10;
        count++;
        a=a/10;
    }
    int b=4*d;
    int e=b-(4-count);
    int f=e/4;
    int g=e%4;
    int ans=f*10+(g*(g+1)/2);
    printf("%d\n",ans);
    }
}
