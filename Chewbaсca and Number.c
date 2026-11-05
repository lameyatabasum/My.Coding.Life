#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        int n=a[i]-'0';
        if(i==0)
        {
            if(n!=9&&9-n<n)
               n=9-n;

        }
        else
        {
        if((9-n)<n)
            n=9-n;
        }
        a[i]=n+'0';
    }
    printf("%s",a);
}
