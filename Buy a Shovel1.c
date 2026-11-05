#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=10;i++)
    {
        int d=(a*i)%10;
        if(d==0||d==b)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
