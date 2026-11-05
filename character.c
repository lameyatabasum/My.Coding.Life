#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char a[100];
    scanf("%s",a);
    l=strlen(a);
    printf("%c",a[l/2]);
}
