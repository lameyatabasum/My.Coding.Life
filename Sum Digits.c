#include<stdio.h>
int main()
{
    long long a;
    scanf("%lld",&a);
    long long n;
    scanf("%lld",&n);
    long long sum=0;
    while(n>0)
    {
       int c=n%10;
       sum=sum+c;
       n=n/10;
    }
    printf("%lld",sum);
}
