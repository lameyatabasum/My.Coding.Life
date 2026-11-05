#include<stdio.h>
int main()
{
    int a=0,b=1,c,d=0;

    scanf("%d",&c);
    int count=0,sum=0;
    int p=c;
    while(p>0)
    {
        int m=p%10;
        sum++;
        p=p/10;
    }
    for(int i=3;c>d;i++)
    {
        d=a+b;
        a=b;
        b=d;
        printf("%d",d);
        count++;
        c=c-d;

    }
    printf("%d",count-sum+1);


}

