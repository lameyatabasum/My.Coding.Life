#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    for(a; ;a=a/10)
    {

       if(a==0)
       {
           break;
       }
       count++;
    }

    printf("%d",count);
}
