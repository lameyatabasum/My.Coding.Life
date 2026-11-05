#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cmp(const void*a,const void*b) {
    return (*(int*)a-*(int*)b);}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b;
        scanf("%d%d%d",&n,&a,&b);
        int u[101];
        int m,f,k=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&m,&f);
            u[k]=abs(a-m)+abs(b-f);
            k++;
        }
        qsort(u,k,sizeof(int),cmp);
        printf("%d\n",u[0]);
    }
}
