#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll mx=0;
            ll sum=(i*(i+1)*(2*i+1))/6;
            for(ll j=i+1,k=n;j<=n;j++,k--)
            {
                sum+=j*k;
                mx=max(mx,j*k);
            }
            ans=max(ans,sum-mx);
        }
        cout<<ans<<endl;
    }
}
