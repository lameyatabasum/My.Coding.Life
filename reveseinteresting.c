#include<stdio.h>
static int a;
int myfunction()
{
    printf("%d",a%10);
    a=a/10;

}
int main()
{
    scanf("%d",&a);
    myfunction();
    myfunction();
    myfunction();
    return 0;
}

