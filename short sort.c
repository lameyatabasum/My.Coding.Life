#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    char c[4]="abc";
    while(t--)
    {
        char a[4];
        scanf("%s",a);
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(c[i]==a[i])
                count++;
        }
        if(count>=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
