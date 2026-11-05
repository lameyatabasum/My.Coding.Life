#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int h,s;
    if(a>b&&a>c)
        h=a;
    else if(b>a&&b>c)
        h=b;
    else
        h=c;
    if(a<b&&a<c)
        s=a;
    else if(b<a&&b<c)
        s=b;
    else
        s=c;
    printf("%d",h-s);


}
