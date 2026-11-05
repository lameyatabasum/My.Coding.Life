#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)a-*(int*)b);}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int pair[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        pair[i][0]=a[i];
        pair[i][1]=i;
    }
    qsort(pair,n,sizeof(pair[0]),cmp);
    int s=0;
    int b[100000];
    int k=0;
    for(int i=0;i<n;i++)
    {
        s=s+pair[i][0];
        if(s<=m)
        {
            b[k]=pair[i][1];
            k++;
        }
    }
    printf("%d\n",k);
    qsort(b,k,sizeof(int),cmp);
    for(int i=0;i<k;i++)
        printf("%d ",b[i]+1);

}
