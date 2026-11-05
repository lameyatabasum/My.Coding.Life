#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
        printf("1");
    else
    {
        int c=n%4;
        if(c==0)
            printf("6");
        else if(c==2)
            printf("4");
        else if(c==3)
            printf("2");
        else if(c==1)
            printf("8");

    }

}
