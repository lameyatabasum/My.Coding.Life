#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("%d\n",b+c);
    }
}
