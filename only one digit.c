#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a;
    while(t--)
    {
        scanf("%d",&a);
        int c,h=9;
        while(a>0)
        {
            c=a%10;
            if(h>c)
                h=c;
            a=a/10;
        }
        printf("%d\n",h);
    }
}
