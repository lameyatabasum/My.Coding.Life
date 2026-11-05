#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=(a/10)%10;
    d=a%10;
    if(b<c&&c<d)
    {
        printf("the number is interesting");
    }
    else
    {
        printf("the number is not interesting");
    }
}
