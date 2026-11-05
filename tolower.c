#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[150],c[150];
    int k=0;
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        a[i]=tolower(a[i]);
         if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='y')
         {
             c[k]='.';
             c[k+1]=a[i];
             k+=2;
         }
    }
    c[k]='\0';
    printf("%s",c);

}
