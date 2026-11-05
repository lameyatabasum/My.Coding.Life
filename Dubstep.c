#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l; )
    {
        if(i+2<l&&(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'))
           {
               printf(" ");
               i=i+3;
           }
        else
        {
            printf("%c",a[i]);
            i++;
        }
    }
}

