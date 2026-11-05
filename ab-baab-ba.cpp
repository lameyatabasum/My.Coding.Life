#include<bits/stdc++.h>
using namespace std;

double power(double x, long long n)
{
    if(n == 0) return 1.0;

    long long b = n;
    if(b < 0) {
        x = 1.0 / x;
        b = -b;
    }

    double ans = 1.0;
    while(b > 0)
    {
        if(b & 1) ans *= x;
        x *= x;
        b >>= 1;
    }
    return ans;
}


int main()
{
    double x,n;
    cin>>x>>n;
    long long ans= power(x,n)-power(n,x);
    cout<<ans;
}
