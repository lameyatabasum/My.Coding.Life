#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n,r;
    cin>>n>>r;
    long long nf=fact(n);
    long long nrf=fact(n-r);
    long long rf=fact(r);

    long long ansp=nf/nrf;
    long long ansc=ansp/rf;
    cout<<ansc<<" "<<ansp;
}
