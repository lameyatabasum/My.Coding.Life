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
    for(int i=0;i<t;i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    cout<<m.size()<<endl;
}
