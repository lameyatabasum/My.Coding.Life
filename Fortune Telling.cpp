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
        ll n,x,y;
        cin>>n>>x>>y;
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sum^=x;
        }
        if(sum%2==y%2)
        {
            if(x%2==0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
        else
        {
            if(x%2!=0)
                cout<<"Alice"<<endl;
            else
                cout<<"Bob"<<endl;
        }
    }
}
