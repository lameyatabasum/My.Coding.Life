#include<stdio.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    for(int i=0;a[i]!=0,b[i]!=0;i++)
    {
        if(a[i]==b[i])
            printf("0");
        else
            printf("1");
    }
}
