#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,m,x,y;
    scanf("%d%d%d%d",&n,&m,&x,&y);
    int array1[n],array2[m];
    for(int i=0;i<n;i++)
        scanf("%d",&array1[i]);
    for(int i=0;i<m;i++)
        scanf("%d",&array2[i]);
    printf("%d\n",n+m);
    }
}
