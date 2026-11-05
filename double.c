#include<stdio.h>
int main()
{
    long long a,s;
    scanf("%lld",&a);
    for(int i=1;i<=a;i++)
        s=s+i*i;
    printf("%lld",s);
}
