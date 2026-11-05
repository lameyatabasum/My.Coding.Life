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
    int h=l/2;
    if(l%2!=0)
        printf("NO\n");
    else
    {
        int flag=0;
        for(int i=0;i<h;i++)
        {
            if(a[i]!=a[h+i])
            {
                flag=1;
                printf("NO\n");
                break;
            }

        }
        if(flag==0)
         printf("YES\n");
    }
    }
}
