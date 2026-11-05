#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
        {
          printf("%d %d",b,a);
        }
        else
        printf("%d %d",a,b);
         printf("\n");


    }
}
