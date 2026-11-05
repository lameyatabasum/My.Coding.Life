#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    int sum=0;
    while(sum+i<= n)
    {

       sum=sum+i;
       n=n-sum;
      i++;

    }
    printf("%d",i-1);
}
