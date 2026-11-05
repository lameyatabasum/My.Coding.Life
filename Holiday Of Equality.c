#include<stdio.h>
#include<stdlib.h>
int cmp(void const*a,void const*b)
{
    return(*(int*)b-*(int*)a);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    int sum=0;
    for(int i=1;i<n;i++)
    {
        sum=sum+a[0]-a[i];
    }
    printf("%d",sum);


}
