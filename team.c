#include<stdio.h>
int main()
{
    int t,a,b,c,count=0;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);
}
