#include<stdio.h>
int gcd(int a,int b)
{
    int c=(a<b)?a:b;
    int d;
   for(int i=1;i<=c;i++)
   {
       if(a%i==0&&b%i==0)
           d=i;

   }
   return d;
}
int main()
{
    int y,w;
    scanf("%d%d",&y,&w);
    int max=(y>w)?y:w;
    int win=6-max+1;
    int g=gcd(win,6);
    printf("%d/%d",win/g,6/g);


}
