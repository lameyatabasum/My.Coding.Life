#include<stdio.h>
int prime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
        return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("4 %d",n-4);
    else
    {
        if(prime(n-4))
          printf("4 %d",n-4);
        else if(prime(n-9))
            printf("9 %d",n-9);

    }

}
