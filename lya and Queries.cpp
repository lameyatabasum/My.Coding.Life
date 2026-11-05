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
    string s;
    cin>>s;
    vector<ll>p(100000+1,0);

    for(ll i=1;i<s.length();i++)
    {
        ll c=0;
        if(s[i]==s[i-1])
            c=1;
        p[i]=p[i-1]+c;
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<p[r-1]-p[l-1]<<endl;
    }
}
