#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    while(n>0)
    {
        int a=n%2;
        c=c+a;
        n=n/2;
    }
    printf("%d",c);
}
