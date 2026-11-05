#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll c=0;
    ll psum=0;
    unordered_map<ll,ll>m;
    m[0]=1;
    for(ll i=0;i<n;i++)
    {
        psum+=a[i];
        ll val=psum-k;
            c+=m[val];
        m[psum]++;
    }
    cout<<c<<endl;
}

