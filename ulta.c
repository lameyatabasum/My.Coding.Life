#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
                    int u=5-i+1;

        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {

            printf("%d ",u);
            u++;

        }
        printf("\n");
    }
}
