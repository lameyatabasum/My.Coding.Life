#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    int c[1001];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=sum-a+b;
        c[i]=sum;
    }
    int h=c[0];
    for(int i=1;i<n;i++)
    {
        if(h<c[i])
            h=c[i];
    }
    printf("%d",h);

}
