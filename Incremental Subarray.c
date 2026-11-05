#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long long f=(long long)n*(n+1)/2;
        int *b = (int*) malloc(f * sizeof(int));
        int *a = (int*) malloc(m * sizeof(int));
        int k=0;
        for(int i=0;i<m;i++)
            scanf("%d",&a[i]);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                b[k]=j;
                k++;
            }
        }
        int count=0;
        for(long long i=0;i<f-m+1;i++)
        {
            int j;
            for(j=0;j<m;j++)
            {
                if(b[i+j]!=a[j])
                break;
            }
            if(j==m)
                count++;
        }
        printf("%d\n",count);
        free(b);
        free(a);
    }
}
