#include<stdio.h>

int testfunction(int a, int b)
{
    scanf("%d",&a);

   b=a*10;
   printf("%d",b);
}
int a;
 static int b;
int main()
{


    int c=testfunction(a,b);
    int d=testfunction(a,b);




}
