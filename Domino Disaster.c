#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n+1];
        scanf("%s",a);
        for(int i=0;i<n;i++)
        {
            if(a[i]=='U')
                a[i]='D';
            else if(a[i]=='D')
                a[i]='U';
        }
        printf("%s\n",a);
    }
}
