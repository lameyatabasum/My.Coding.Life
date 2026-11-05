#include<stdio.h>
int main()
{
    char a[101];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
           printf("YES");
           return 0;
        }
    }
    printf("NO");
}
