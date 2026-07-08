#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int c,d,sum1=0,sum2=0;
        scanf("%d",&a);
        for(int i=0;i<6;i++)
        {
            if(i<3)
            {
            c=a%10;
            sum1=sum1+c;
            }
            else
            {
                d=a%10;
                sum2=sum2+d;
            }
            a=a/10;
        }
        if(sum1==sum2)
            printf("YES\n");
        else
            printf("NO\n");

    }
}
