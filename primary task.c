#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char a[5];
    scanf("%s",a);
    int l=strlen(a);
    int k=0;
    if(l<3)
        printf("NO\n");
    else if(l==3)
    {
         if(a[0]=='1'&&a[1]=='0'&&a[2]>='2')
            printf("YES\n");
        else
            printf("NO\n");
        }
    else if(l>3)
    {
        if(a[0]=='1'&&a[1]=='0'&&a[2]!='0')
            printf("YES\n");
        else
            printf("NO\n");



    }
    }

}
