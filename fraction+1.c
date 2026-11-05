#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=(a+b+c+d)/4;
    f=(a+b+c+d)%4;
    if(f==0)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",e+1);
    }
}
