#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long  a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long  low=1e18;
        for(int i=0;i<n;i++)
        {
          for(int j=i+1;j<n;j++)
          {
                long long temp=a[i]+a[j]+j-i;
                if(temp<low)
                  low=temp;
          }
        }
        printf("%lld\n",low);
    }
}
