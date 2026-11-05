#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int count1=0,count2=0;
    char c[105];
    scanf("%s",c);
    int l=strlen(c);
    for(int i=0;i<l;i++)
    {

        if(isupper(c[i]))
            count1++;
        if(islower(c[i]))
            count2++;
    }
    if(count1>count2)
    {
        for(int i=0;i<l;i++)
        {
            c[i]=toupper(c[i]);
        }
    }
    else
    {
        for(int i=0;i<l;i++)
        {
            c[i]=tolower(c[i]);
        }
    }
    printf("%s\n",c);
}
