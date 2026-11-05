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
        int h;
        for(int i=0;i<=100;i++)
        {
            if(freq[i]==1)
            {
                h=i;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==h)
            {
            printf("%d\n",i+1);
            break;
            }
        }

    }
}
