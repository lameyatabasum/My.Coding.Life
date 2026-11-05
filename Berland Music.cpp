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
        string s;
        cin>>s;
        ll o=count(s.begin(),s.end(),'1');
        ll z=count(s.begin(),s.end(),'0');
        vector<pair<ll>>a;
        vi b(n);
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            b[i]=x;
            a.push_back({x,i});
        }
        sort(a.begin(),a.end());


    }
}
