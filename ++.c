#include<stdio.h>
int main()
{
    int a=10,b=20,c1,c2,c3,c4;
    c1=++a+b+ ++a+b+ ++a+b+a++;
    printf("%d",c1);
    printf("%d",a);
    return 0;
}


