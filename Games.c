#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],b[m];
        int freq[101]={0};
        for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
                freq[a[i]]++;
            }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
            freq[b[i]]++;
        }
        int count=0;
        for(int i=0;i<101;i++)
            if(freq[i]>1)
            count++;
        int h=n;
        if(h<m)
            h=m;
        if(n!=m)
        printf("%d\n",h-count+1);
        else
            printf("%d",n+m-count+1);


    }
}
