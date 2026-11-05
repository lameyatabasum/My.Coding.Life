#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int h=n/2;
        if(h%2!=0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            int sum=0;
            for(int i=1;i<=h;i++)
            {
                printf("%d ",2*i);
                sum=sum+(2*i);
            }
            int f=0;
            for(int i=1;i<h;i++)
            {
                printf("%d ",2*i-1);
                f=f+(2*i-1);
            }
            printf("%d",sum-f);
            printf("\n");
        }

    }
}
