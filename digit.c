#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=printf("%d",a)-(a<0);
    printf("\n%d",b);

}
