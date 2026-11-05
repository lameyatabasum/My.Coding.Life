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
    for(int i=0;i<n;i++)
    {
        int h=a[i];
        for(int j=i;j<n;j++)
        {
            if(a[j]>h)
                h=a[j];
            printf("%d ",h);
        }
    }

    printf("\n");

    }
}
