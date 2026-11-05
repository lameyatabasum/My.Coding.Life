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
    ll mx1=LLONG_MIN,mn1=LLONG_MAX;
    for(ll i=0;i<n;i++)
    {
        ll l1,r1;
        cin>>l1>>r1;
        mn1=min(mn1,r1);
        mx1=max(mx1,l1);
    }
    ll m;
    cin>>m;
    ll mx2=LLONG_MIN,mn2=LLONG_MAX;
    for(ll i=0;i<m;i++)
    {
        ll l2,r2;
        cin>>l2>>r2;
        mx2=max(mx2,l2);
        mn2=min(mn2,r2);
    }
    ll mx=0;
    mx=max({mx,mx2-mn1,mx1-mn2});
    cout<<mx<<endl;

}
