#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long b[n];
        long long a[n]={};
        int k=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
        }
        a[k]=0;
        k++;
        a[k]=1;
        k++;
        for(int i=0;i<n-1;i++)
        {
            a[k]=b[i+1]-b[i];
            k++;
        }
        //a[k]=b[n-1]-b[n-2];
        //k++;
        for(int i=1;i<k-1;i++)
            printf("%lld",a[i]);
        int m=1;
        //printf("%d ",m);
        /*for(int i=0;i<k;i++)
        {

            if((a[i]!=a[i+1])&&(a[i]!=0))
                m++;
            printf("%d ",m);*/




        }
        //printf("%d ",m);


    }
