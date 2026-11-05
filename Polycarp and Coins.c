#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n;
    scanf("%d",&n);
    int num1,num2;
    if(n%3==0)
    {
        num1=n/3;
        num2=n/3;
    }
    else if(n%3==1)
    {
        num1=n/3 + 1;
        num2=n/3;
    }
    else if(n%3==2)
    {
        num1=n/3;
        num2=n/3 + 1;
    }
    printf("%d %d\n",num1,num2);

    }
}
