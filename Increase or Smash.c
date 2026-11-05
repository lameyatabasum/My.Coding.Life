#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int freq[101]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            freq[a[i]]++;
        }
        int count=0;
        for(int i=1;i<101;i++)
        {
            if(freq[i]>0)
                count++;
        }
        int p=(count*2)-1;
        printf("%d\n",p);
    }
}
