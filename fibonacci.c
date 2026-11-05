#include<stdio.h>
int main()
{
    long long a=0,b=1,c;
    long long d=0;
    scanf("%lld",&c);
    if(c==1)
    printf("%lld",a);
    else if(c==2)
        printf("%lld",b);
    else
    {
    for(int i=3;i<=c;i++)
    {
        d=a+b;
        a=b;
        b=d;
    }
    printf("%lld",d);
    }


}
