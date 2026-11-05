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
        vector<pair<ll,ll>>p;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            p.push_back({x,i+1});
        }
        ll c=0;
        sort(p.begin(),p.end());
        for(ll i=n-1;i>0;i--)
        {
            for(ll j=0;j<i;j++)
            {
                if(p[i].first*p[j].first>=2*n)
                    break;
                if(p[i].first*p[j].first==p[i].second+p[j].second)
                    c++;
            }
        }
        cout<<c<<endl;
    }

}
