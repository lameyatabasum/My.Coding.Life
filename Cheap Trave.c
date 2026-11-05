#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    int total=a*n;
    int total1=(n/m)*b+(n%m)*a;
    int total2=((n+m-1)/m)*b;
    if(n>=m)
    {
        if(total<total1&&total<total2)
        printf("%d",total);
        else if(total1<total&&total1<total2)
            printf("%d",total1);
        else
            printf("%d",total2);
    }
    else if(m>n)
    {
        if(b<total)
          printf("%d",b);
        else
            printf("%d",total);
    }

}
