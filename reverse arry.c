#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        int p=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=p;

    }
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}
