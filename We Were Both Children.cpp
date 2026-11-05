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
        vector<ll>f(n+1, 0);
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x<=n)
                f[x]++; // freq count korlam dupicate thkte pare;
        }
        vector<ll>c(n+1, 0);
        ll ans=0;
        for(ll i=1;i<=n;i++)
        {
            if(f[i]==0)
                continue;
            for(ll j=i;j<=n;j+=i)
            {
                c[j]+=f[i];
                ans=max(ans,c[j]);  // ekta number j koyber ache tar jnno ek ber kore f er nam jog korlam
            }

        }
        cout<<ans<<endl;
     }
}

