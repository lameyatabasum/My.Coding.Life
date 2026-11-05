#include<stdio.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {

    long long a;
    scanf("%lld",&a);
    int sum=0;
    while(a>0)
    {
        int c=a%2;
        sum+=c;
        a=a/2;
    }
    //sum=sum+(a%2);
    if(sum==2|| sum==3|| sum==5||sum==7||sum==11||sum==13||sum==17||sum==19||sum==23||sum==29||sum==31||sum==37)
        printf("Binary prime\n");
    else
        printf("-1\n");
    }

}

