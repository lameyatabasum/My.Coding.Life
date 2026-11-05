#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
int main()
{
    fast
    ll n;
    cin>>n;
    vi a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    long long ans=0,psum=0;
    unordered_map<long long, long long>c;
    c[0]=1;
    for(ll i=0;i<a.size();i++)
    {
        psum=(psum+a[i]%n + n)%n;
        ans+=c[psum];
        c[psum]++;
    }
    cout<<ans;
}

