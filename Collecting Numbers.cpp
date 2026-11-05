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
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[x]=i;
    }
    ll c=1;
    for(int i=2;i<=n;i++)
    {
        if(m[i]<m[i-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
}

