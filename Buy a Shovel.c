#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a%10;
    if(c==5)
        printf("2");
    else if(c==0)
        printf("1");
    else
    {
     for(int i=1;i<=9;i++)
     {
        int d=c*i;
        if(d%10==b||d%10==0)
            {
            printf("%d",i);
            break;
            }
     }
    }
}
