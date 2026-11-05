#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[101];
        scanf("%s",a);
        int l=strlen(a);
        printf("%c",a[0]);
        for(int i=1;i<l;i+=2)
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }
}
