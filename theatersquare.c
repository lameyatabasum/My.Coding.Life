#include<stdio.h>
#include<math.h>
int main()
{
    double m,n,a;
    scanf("%lf %lf %lf",&m,&n,&a);
    long long b=ceil(m/a);
    long long c=ceil(n/a);
    printf("%lld",b*c);
}
