#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char a[101],b[101],c[101]="YES";
        scanf("%100s",a);
        b[0]=toupper(a[0]);
        b[1]=toupper(a[1]);
        b[2]=toupper(a[2]);
        b[3]='\0';
        if(strcmp(b,c)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
