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
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
        }
        if(n==1)
            cout<<1;
        else
        {
            for(ll i=0;i<n;i++)
                cout<<2<<" ";
        }
        cout<<endl;
    }
}

