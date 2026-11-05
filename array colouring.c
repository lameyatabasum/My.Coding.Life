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
        int count1=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2!=0)
            {
                count1++;
            }

        }
            if(count1%2==0)
                printf("YES\n");
            else
                printf("NO\n");
    }
}
