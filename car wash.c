#include<stdio.h>
int main()
{
    int x,y,z,t,v;
    scanf("%d%d%d%d%d",&x,&y,&z,&t,&v);
    int a=y*t;
    int b=z*v;
    if(x<a&&x<b)
        printf("%d",x);
    else if(a<x&&a<b)
        printf("%d",a);
    else
        printf("%d",b);
}
