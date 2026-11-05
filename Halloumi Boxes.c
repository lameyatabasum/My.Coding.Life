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
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(k>1)
            printf("YES\n");
        else if(k==1)
        {
            int flag=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==1)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }
}
