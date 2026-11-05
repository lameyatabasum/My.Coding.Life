#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[2];
        char s;
        char b[3];
            scanf("%d",&a[0]);
        scanf(" %c",&s);
            scanf("%s",b);
        int p=a[0];
        if(p>12)
            p=p-12;
        else if(p==0)
            p=12;
        int f[2];
        f[1]=p%10;
        p=p/10;
        f[0]=p%10;
        char g[3];
        if(a[0]<12)
            strcpy(g,"AM");
        else
           strcpy(g,"PM");
        for(int i=0;i<2;i++)
          printf("%d",f[i]);
        printf("%c",s);
            printf("%s ",b);
        printf("%s\n",g);

    }
}
