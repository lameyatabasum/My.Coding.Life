#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    int b;
    scanf("%lf",&a);
    if(a>0)
    {
    b=(int)ceil(a/5);
    printf("%d\n",b);
    }
}
