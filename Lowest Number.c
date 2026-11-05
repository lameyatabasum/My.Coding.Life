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
    int h=a[0];
    int index=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]<h)
        {
            h=a[i];
            index=i+1;
        }
    }
    printf("%d %d",h,index);
}
