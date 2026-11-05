#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1,num=i;j<=i;j++,num+=2)
        {
            printf("%d ",num);
        }
        printf("\n");
    }
}
