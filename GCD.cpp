#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while(b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    long long a,b;
    cin>>a>>b;

    long long mx=max(a,b);
    long long mn=min(a,b);
    int g=gcd(mx ,mn);
    cout<<g<<" ";
    long long h=(mx/g)*mn;
    cout<<h;
}
