#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='.')
            printf("0");
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
                printf("1");
            else if(s[i+1]=='-')
                printf("2");
            i++;
        }
    }
}
