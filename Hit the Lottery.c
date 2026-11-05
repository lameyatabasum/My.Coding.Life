#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int count=0;
    while(a>0)
    {
        if(a/100>0)
        {

            count=count+a/100;
              a=a%100;
        }
        else if(a/20>0)
        {

            count=count+a/20;
            a=a%20;
        }
         else if(a/10>0)
        {

            count=count+a/10;
            a=a%10;
        }
         else if(a/5>0)
        {

            count=count+a/5;
            a=a%5;
        }
        else if(a/1>0)
        {

            count=count+a/1;
            a=a%1;
        }
    }
    printf("%d",count);
}
