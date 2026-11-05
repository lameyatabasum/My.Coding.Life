#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(long long*)b-*(long long*)a);}
int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    long long b[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
    }
    qsort(b,n,sizeof(long long),cmp);
    long long total=b[0]+b[1];
    if(total>=sum)
        printf("YES");
    else
        printf("NO");

}
