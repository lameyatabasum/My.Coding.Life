#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    if(n%2==0)
        printf("%lld",n/2);
    else
        {
            long long c=(n+1)/2;
            long long d=-c;
        printf("%lld",d);
        }

}
