#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)a-*(int*)b);}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(int),cmp);
        a[0]=a[0]+1;
        long long s=1;
        for(int i=0;i<n;i++)
        {
            s=s*a[i];
        }
        printf("%lld\n",s);
        //printf("\n");
    }
}
