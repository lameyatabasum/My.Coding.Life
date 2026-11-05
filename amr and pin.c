#include<stdio.h>
#include<math.h>
int main()
{
    long long r,x,y,a,b;
    scanf("%lld%lld%lld%lld%lld",&r,&x,&y,&a,&b);
    double m=(a-x);
    double n=(b-y);
    double s=sqrt(m*m+n*n);
    long long ans=(long long)ceil(s/(r*2.0));
    printf("%lld",ans);

}
