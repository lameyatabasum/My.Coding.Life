#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)b-*(int*)a);}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m];
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    qsort(a,m,sizeof(int),cmp);
    int f=a[0]-a[n-1];
    for(int i=1;i<m-n+1;i++)
    {
        int temp=a[i]-a[i+n-1];
        if(temp<f)
            f=temp;
    }
    printf("%d",f);
}
