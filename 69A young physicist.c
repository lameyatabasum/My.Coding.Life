#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    int a[k][100];
    int s=0,t=0,u=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            s=s+a[i][0];
            t=t+a[i][1];
            u=u+a[i][2];
        }
    }
    if(s==0&&t==0&&u==0)
        printf("YES\n");
    else
        printf("NO\n");
}
