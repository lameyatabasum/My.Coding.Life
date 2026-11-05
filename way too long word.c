
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char a[100];
        scanf("%s",&a);
        int c=strlen(a);
        int l=strlen(a)-2;
        if(l<=8)
        {
            printf("%s\n",a);
        }
        else
        {
            printf("%c%d%c\n",a[0],l,a[c-1]);
        }
    }
}
