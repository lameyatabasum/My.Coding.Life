#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[101];
    scanf("%s",a);
    int c=isupper(a[0]);
    int flag=1;
    for(int i=1;a[i]!='\0';i++)
    {
        if(isupper(a[i]))
        {
        flag=0;
        break;
        }

    }
    if(c>0&&flag==1)
        printf("%s",a);
    else
    {
        for(int i=0;a[i]!=0;i++)
        {
            if(isupper(a[i]))
            {
                a[i]=tolower(a[i]);
            }
            else
              a[i]=toupper(a[i]);
        }
        printf("%s",a);
    }
}
