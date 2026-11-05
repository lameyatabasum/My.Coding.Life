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
            scanf("%d",&a[i]);
        int h=a[0];
        for(int i=1;i<n;i++)
        {
            if(h>a[i])
                h=a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+(a[i]-h);
        printf("%d\n",sum);

    }
}
