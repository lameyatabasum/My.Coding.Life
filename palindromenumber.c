#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/100;
    c=a%10;
    if(b==c)
    {
        printf("a is the palindrome number");
    }
    else
    {
        printf("a is not the palindrome number");
    }
}
