#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,d,e,f,g;
    scanf("%d%d",&a,&b);
    int c=abs(a-b);
    d=c/2;
    e=c-d;
    f=(d*(d+1))/2;
    g=(e*(e+1)/2);
    printf("%d\n",f+g);
}
