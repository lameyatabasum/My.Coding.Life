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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll m;
    cin>>m;
    ll f[n+1]={0};
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        if(f[x]==1)
            f[x]=0;
        else if(f[x]==0)
            f[x]=1;
        if(f[y]==1)
            f[y]=0;
        else if(f[y]==0)
            f[y]=1;

    }
    int flag=0;
    for(ll i=1;i<=n;i++)
    {
        if(f[i]!=a[i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
