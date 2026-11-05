#include<stdio.h>
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long h=(n+1)/2;
    if(h>=k)
        printf("%lld",(2*k)-1);
    else
    {
        long long t=k-h;
        printf("%lld",2*t);
    }

}
