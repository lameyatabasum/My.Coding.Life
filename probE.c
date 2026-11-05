#include<stdio.h>
int main()
{
     double a;
    scanf("%lf",&a);
    if(a==1)
    {
        printf("%lf",a);
    }
    else
    {
        printf("%lf ",a);
    while(a!=1)
    {
    if(a%2==0)
    {
        a=a/2;
        printf("%lf ",a);
    }
    else if(a%2!=0)
    {
        a=(a*3)+1;
        printf("%lf ",a);
    }
    }
    }
}
