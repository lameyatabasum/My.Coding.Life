#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n];
        int freq[n+1];
        int count=0;
        for (int i=0;i<=n;i++)
            freq[i]=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(freq[a[i]]<=n)
                freq[a[i]]++;
        }
        for(int i=0;i<k;i++)
        {
            if(freq[i]==0)
                 count++;
        }
        if(count>freq[k])
            printf("%d\n",count);
        else
            printf("%d\n",freq[k]);




    }
}
