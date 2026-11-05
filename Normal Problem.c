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
        int n=strlen(a);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='p')
                a[i]='q';
            else if(a[i]=='q')
                a[i]='p';
        }
        int h=n/2;
        for(int i=0;i<h;i++)
        {
            char temp=a[i];
            a[i]=a[n-i-1];
            a[n-i-1]=temp;
        }
        printf("%s\n",a);

    }
}
