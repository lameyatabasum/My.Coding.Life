#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n*n;
    int a[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1=0;
    for(int i=0;i<m;i=i+(n+1))
    {
        sum1=sum1+a[i];
    }
    //printf("%d",sum1);
    int sum2=0;
    for(int i=(n-1);i<m-n+1;i=i+(n-1))
    {
        sum2=sum2+a[i];
    }
    //printf("%d",sum2);
    printf("%d",abs(sum1-sum2));
}
