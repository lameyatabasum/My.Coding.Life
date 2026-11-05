#include<stdio.h>

int main()

{
     char b[1005];
    scanf("%s",b);
    if(b[0]>='a'&&b[0]<='z')
    b[0]=b[0]-32;
    printf("%s",b);
    return 0;
}
