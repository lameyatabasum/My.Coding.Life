#include<stdio.h>
int main()
{
    int a=10,b=20,c1=10;
  c1=++a+b+ ++a+b+ ++a+b+c1++;
  printf("%d",c1);
  printf("%d",c1);
}
