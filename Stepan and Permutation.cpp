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
        ll f=0;
        ll gcd=__gcd(x,y);
        vi p(n+1,0);
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            p[x]=i;
        }
        for(ll i=1;i<=n;i++)
        {
            if(p[i]%gcd!=i%gcd)
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
