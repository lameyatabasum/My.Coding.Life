#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int flag=0;
    for(int i=1;s[i]!='\0';i++)
    {
        if(islower(s[i]))
        {
        flag=1;
        break;
        }

    }
    if(flag==0)
    {
        for(int i=0;s[i]!='\0';i++)
        {
        if(isupper(s[i]))
        {
          s[i]=tolower(s[i]);
        }
        else
        {
          s[i]=toupper(s[i]);
        }
        }
    }

    printf("%s",s);
}
