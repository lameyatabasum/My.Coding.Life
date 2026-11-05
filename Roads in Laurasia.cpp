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
        ll f[n+1]={0};
        ll m=n;
        m--;
        while(m--)
        {
            ll u,v;
            cin>>u>>v;
            f[u]++;
            f[v]++;
        }
        ll c=0;
        ll flag=0;
        for(ll i=1;i<=n;i++)
        {
            if(f[i]<=1)
                c++;
            if(f[i]==0)
                flag=1;
        }
        if(flag==1)
            c++;
        cout<<(c+1LL)/2LL<<endl;
    }
}
