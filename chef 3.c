#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long p;
        scanf("%lld",&p);
        int a[n];
        int count0=0;

        for(int i=0;i<n;i++)
        {
            long long c=p%10;
            p=p/10;
            a[i]=c;
            if(a[i]==0)
                count0++;
        }
        if(count0==n)
            printf("0\n");
        else
        {
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                count0--;
            else
                break;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]==0)
                count0--;
            else
                break;
        }
        printf("%d\n",count0);
        }
    }
    return 0;

}
