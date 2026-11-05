#include<stdio.h>
int main()
{
    int t,a,b,n,s=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d%d%d",&a,&b,&n);
    while(a<n&&b<n)
    {
        if(a<b)
        {
            a+=b;
        }
        else
        {
            b+=a;
        }
        s++;
    }

    printf("%d",s);
    }

}
