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
        vi a(n);
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }

        ll l=m.size();
        vector<pair<ll,ll>>p;
        for(auto x : m)
        {
            p.push_back({x.first,x.second});
        }
        reverse(p.begin(),p.end());
        ll sum=p[0].second;
        ll ans=0;
        for(ll i=1;i<l;i++)
        {
            ans+=min(sum,p[i].second);
            sum=max(0LL,sum-p[i].second);
            sum+=p[i].second;
        }
        cout<<ans<<endl;


}
