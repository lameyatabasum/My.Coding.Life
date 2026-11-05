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
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>1)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
          printf("NO\n");
        else
            printf("YES\n");
    }
}
