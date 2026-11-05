#include<stdio.h>
#include<math.h>
int tprime(long long m)
{
    if(m<2)
        return 0;
    int flag=0;
    for(int i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            return 0;
        }
    }
   return 1;

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a;
        scanf("%lld",&a);
        long long m=(long long)sqrt(a);

        if(m*m==a&&tprime(m))
        {
          printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
}
