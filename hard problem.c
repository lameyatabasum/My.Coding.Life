#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,a,b,c;
        scanf("%d%d%d%d",&m,&a,&b,&c);
        int s=0,p=0,q=0;
        int l=m;
        if(m>a)
        {
            l=a;
            s=m-a;
        }
        int e=m;
        if(m>b)
        {
            e=b;
            p=m-b;
        }
        q=s+p;
        if(s+p>c)
            q=c;
        printf("%d\n",l+e+q);

    }
}
