#include<stdio.h>
int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n>1)
        {
         if(n%2!=0)
            printf("YES\n");
         else if((n&(n-1))==0)
            printf("NO\n");
         else
            printf("YES\n");
        }
    }
}
