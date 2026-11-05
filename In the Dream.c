#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int s=a,p=b;
        if(s>b)
        {
            s=b;
            p=a;
        }
        if(p-s>=3)
        {
            printf("NO\n");
        }
        else
        {
            int c1=c-a;
            int d1=d-b;
            int s1=c1,p1=d1;
            if(s1>d1)
            {
                s1=d1;
                p1=c1;
            }
            if(a!=c&&b!=d)
            {
            if(p1%(s1*2)>=3)
                printf("NO\n");
            else
                printf("YES\n");
            }
            else
            {
                if(p1-s1>=3)
                    printf("NO\n");
                else
                    printf("YES\n");
            }
        }


    }
}
