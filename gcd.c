#include<stdio.h>
int main()
{
    int a,b,gcd;
    printf("largest number");
    scanf("%d",&a);
    printf("smallest number");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}
