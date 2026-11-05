#include<stdio.h>
int main()
{
    long long n,q;
    scanf("%lld%lld",&n,&q);
    long long a[n];
    long long p[n+1];
    p[0]=0;
    long long k=1;
    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        p[k]=p[k-1]+a[i];
        k++;
    }
    while(q--)
    {
        long long s,m;
        scanf("%lld%lld",&s,&m);
        long long sum=p[m]-p[s-1];

        printf("%lld\n",sum);
    }
}
