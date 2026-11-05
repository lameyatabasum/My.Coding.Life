#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b)
 {
    int x = *(int*)a;
    int y = *(int*)b;
    return x - y;
 }
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int k=0,b[100000];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
         qsort(a, n, sizeof(int), cmp);
         for(int i=0;i<n-1;i+=2)
            {
                b[k]=a[i+1]-a[i];
                k++;
            }
        qsort(b,k,sizeof(int),cmp);
        printf("%d\n",b[k-1]);


    }
}
