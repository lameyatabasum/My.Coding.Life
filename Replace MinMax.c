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
    int s=a[0];
    int sin=0;
    int h=a[1];
    int hin=1;
    for(int i=0;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
            sin=i;
        }
        if(h<a[i])
        {
            h=a[i];
            hin=i;
        }
    }
    int temp=a[sin];
    a[sin]=a[hin];
    a[hin]=temp;
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
