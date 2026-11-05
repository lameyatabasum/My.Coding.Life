#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
long long Count_of_divisors(long long n)
{
    long long ans=1;
    for(long long i=2;i*i<=n;i++)
    {
        long long c=0;
        while(n%i==0)
        {
            n/=i;
            c++;
        }
        ans*=(c+1);
    }
    if(n>1)
        ans*=2;
    return ans;
}

int main()
{
    fast
    ll n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll gcd=0;
    for(int i=0;i<n;i++)
    {
        gcd=__gcd(gcd,a[i]);
    }
    //cout<<gcd<<endl;
    cout<<Count_of_divisors(gcd)<<endl;
}
