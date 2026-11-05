#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a-((a/2)*2);
    if(b==0)
    {
        printf("The number is even");

    }
    else
    {
        printf("The number is odd");

    }
}
