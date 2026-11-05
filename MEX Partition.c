#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int freq[101]={0};
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            freq[a[i]]++;
        }

        for(int i=0;i<101;i++)
        {
            if(freq[i]==0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
}
