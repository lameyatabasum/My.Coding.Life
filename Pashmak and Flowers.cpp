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
    map<ll,ll>m;
    ll f;
    cin>>f;
    m[f]++;
    ll mx=f, mn=f;
    for(int i=1;i<n;i++)
    {
        ll x;
        cin>>x;
        mx=max(mx,x);
        mn=min(mn,x);
        m[x]++;
    }
    //cout<<mx<<" "<<mn<<endl;
    if(mn==mx)
    {
        cout<<0<<" "<<n*(n-1)/2<<endl;
    }
    else
    {
        cout<<mx-mn<<" "<<m[mx]*m[mn]<<endl;
    }


}

