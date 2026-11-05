#include<stdio.h>
#include<string.h>
int main()
{
    char a[191],b[101];
    scanf("%s",a);
    scanf("%s",b);
    int l=strlen(a);
    for(int i=0;i<l/2;i++)
    {
        int m=a[i];
        a[i]=a[l-i-1];
        a[l-1-i]=m;
    }
    a[l]='\0';
    if(strcmp(a,b)==0)
        printf("YES\n");
    else
        printf("NO\n");
}
