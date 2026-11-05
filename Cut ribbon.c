#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d%d%d%d",&n,&a,&b,&c);
    int max=0;
    for(int x=0;x<=n;x++)
    {
        for(int y=0;(x*a+y*b)<=n;y++)
        {
            int p=n-(x*a+y*b);
            if(p%c==0)
            {
                int z;
                z=p/c;
            int t=x+y+z;
            if(t>max)
                max=t;
            }

        }
    }
    printf("%d",max);
}
