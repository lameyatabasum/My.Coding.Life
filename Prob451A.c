#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int small;
    if(m>n)
    {
        small=n;
    }
    else
    {
        small=m;
    }
    if(small%2==0)
        printf("Malvika");
    else
        printf("Akshat");
}
