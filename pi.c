#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[31]="3141592653589793238462643383279";
    while(t--)
    {
        char d[31];
        scanf("%s",d);
        int l=strlen(d);
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(a[i]==d[i])
               c++;
            else
                break;
        }
        printf("%d\n",c);

    }

}
