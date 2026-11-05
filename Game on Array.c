#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)b-*(int*)a);}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a[n];
        for(long long i=0;i<n;i++)
            scanf("%lld",&a[i]);
        qsort(a,n,sizeof(long long),cmp);
        long long m=a[0];
        long long s=a[n-1];
        long long index=0,count=0;
        int flag=0,alice=0,bob=0;
        for(long long h=m;h>=1;h--)
        {
            while(index<n&&a[index]>=h)
            {
                count++;
                index++;
            }
            if(flag==0)
            {
                alice+=count;
                //flag=1;
            }
            else
            {
                bob+=count;
                //flag=0;
            }
            flag^=1;

        }
         printf("%lld %lld\n",alice,bob);

    }
}
