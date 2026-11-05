#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int a[m];
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    long long sum=a[0];
    for(int i=1;i<m;i++)
    {
        if(a[i-1]>a[i])
            sum=sum+(h-a[i-1]+a[i]);
        else
            sum=sum+a[i]-a[i-1];
    }
    printf("%lld",sum-1);

}
