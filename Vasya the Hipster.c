#include<stdio.h>
#include<math.h>
int main()
{
    int r,b;
    scanf("%d%d",&r,&b);
    int e;
    if(r>=b)
        e=b;
    else
        e=r;

    int c=abs(r-b);
    int d=c/2;
    printf("%d %d",e,d);
}
