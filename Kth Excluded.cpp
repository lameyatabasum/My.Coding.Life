#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main()
{
    fast
    ll n,q;
    cin>>n>>q;

    vector<ll>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<pair<ll,ll>>m(q);
    for(int i=0;i<q;i++){
        cin >> m[i].first;
        m[i].second = i;
    }
   sort(m.begin(),m.end());

    vector<ll>ans(q);

    ll j=0,x=0;

    for(auto k : m)
    {
        while(j<n && a[j]-x<=k.first)
        {
            x++;
            j++;
        }
        ans[k.second]=k.first+x;
    }

    for(int i=0;i<q;i++)
        cout<<ans[i]<<endl;
}
