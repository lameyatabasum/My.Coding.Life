#include<bits/stdc++.h>
using namespace std;

long long Factorial(long long n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    long long mn=min(a,b);
    cout<<Factorial(mn)<<endl;
}
