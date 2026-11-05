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
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int j=i;
           while(j+1<n&&a[j]<=a[j+1])
              j++;
            long long l=j-i+1;
            count=count+(l*(l+1)/2);
            i=j;
        }

        printf("%d\n",count);
    }
}
