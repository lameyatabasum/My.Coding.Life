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
    map<ll,ll>m;
    ll s=LLONG_MAX;
    while(t--)
    {
        ll x;
        cin>>x;
        s=min(s,x);
        m[x]++;
    }
    ll temp=s;
    ll sum=0;
    for(auto x : m)
    {
        if(temp+1==x.first)
            sum+=m[temp];
        temp=x.first;
    }
    cout<<sum<<endl;
}

