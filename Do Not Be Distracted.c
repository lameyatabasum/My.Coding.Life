#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            //int count=0;
            int j=i;
            while(j+1<n&&a[j+1]==a[i])
                j++;
            for(int k=j+1;k<n;k++)
            {
               if(a[i]==a[k])
               {
                    flag=0;
                    break;
               }

            }
            if(flag==0)
            {
                break;
            }
            i=j;
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
