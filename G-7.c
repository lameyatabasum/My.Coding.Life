#include<stdio.h>
int main()
{
    int t;
    double a;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double c,d,e;
        scanf("%lf",&a);
        if(a<=4)
        {
            e=(a*a)%10;
            printf("%lf\n",e);
        }
        else
        {
        c=a%10;
        d=(c*c)%10;
        printf("%lf\n",d);
        }
    }
}
