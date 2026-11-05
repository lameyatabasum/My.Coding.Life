#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int s=n*m;
    int a[s];
    for(int i=0;i<s;i++)
        scanf("%d",&a[i]);
    for(int i=m-1;i<s;i+=m)
    {
        int t=m;
        int h=i;
        while(t>0)
        {
            printf("%d ",a[h]);
            h--;
            t--;
        }
        printf("\n");

    }
}
