#include<stdio.h>
#include<math.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long sum=0;
    while(n--)
    {
        long long a;
        scanf("%lld",&a);
        sum=sum+a;
    }
    printf("%lld",abs(sum));
}
