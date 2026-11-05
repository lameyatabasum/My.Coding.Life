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
        ll c=0,f=0;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>=2)
                c++;
            if(x>2)
                f=1;
        }
        if(f==1 || c>=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

