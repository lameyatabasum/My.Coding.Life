#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n);
        for(int m=1;m<=n;m++)
        {
        for(int i=m;i<=n;i++)
        {
            for(int j=m;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        printf("\n\n");
        }
}
