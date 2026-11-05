#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=n;j++)
    {
    for(int i=0;i<n;i++)
    {
        if(j==a[i])
            printf("%d ",i+1);
    }
    }

}
