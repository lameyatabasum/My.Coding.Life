#include <stdio.h>
#include<conio.h>
int main()
{
    int x = 10;

    int *p = &x;

    printf("%d\n", x);    // 10
    printf("%p\n", &x);   // x-এর address
    printf("%p\n", p);    // x-এর address
    printf("%d\n", *p);   // 10

    int **q = &p;        // q stores address of p

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**q = %d\n", **q);

    return 0;
}
