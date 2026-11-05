#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int r;
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&r);
        a[i]=5-r;
        if(a[i]>=k)
            count++;
    }
    printf("%d",count/3);
}
