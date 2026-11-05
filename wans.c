#include<stdio.h>
void test()
{
  static int n;
  if(n<3)
  {
     n++;
  }
  else
  {
      n--;
  }
   printf("%d",n);
}
int main()
{
    test();
    test();
    test();test();test();test();
    return 0;
}
