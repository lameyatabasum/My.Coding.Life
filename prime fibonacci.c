#include<stdio.h>
typedef unsigned long long ull;
long long prime(ull ans)
{
     if(ans<2)
        return 0;
    if(ans==2)
        return 1;
    if(ans%2==0)
        return 0;
    for(ull i=3;i*i<=ans;i+=2)
    {
        if(ans%i==0)
        {
         return 0;
        }
    }
        return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    ull fibonacci[51];
    //fibonacci[0]=0;
    fibonacci[1]=0;
    fibonacci[2]=1;
    for(int i=3;i<=50;i++)
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    while(t--)
    {
    long long n;
    scanf("%lld",&n);

    if(prime(fibonacci[n])==1)
        printf("prime\n");
    else
        printf("not prime\n");
    }

}

