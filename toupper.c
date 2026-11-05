#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[1005];
    scanf("%1000s",a);
    a[0]=toupper(a[0]);
    printf("%s",a);
    return 0;

}
