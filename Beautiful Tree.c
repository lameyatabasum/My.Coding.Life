#include<stdio.h>
#include<math.h>
int isPerfectSquare(long long S) {
    long long sqrt_S=(long long)(sqrt((long double)S)+0.5);
    return (sqrt_S* sqrt_S==S);
}
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long sum=(n*(n+1LL)/2);
        int flag=0;
        for(long long i=1;i<=n;i++)
        {
            long long r=(sum*i)-(i*i);
            if(isPerfectSquare(r))
            {
                for (long long j =1;j<=n;j++) {
                    if (j != i) {
                        printf("%lld %lld\n",i,j);
                    }
                }
                flag=1;
                break;
            }

        }
        if(!flag)
            printf("-1\n");
    }
}
