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
        ll n,k;
        cin>>n>>k;
        vi a(k);
        vector<pair<ll,ll>>b;
        for(ll i=0;i<k;i++)
            cin>>a[i];
        ll check[k+2]={0};
        for(ll i=0;i<n;i++)
            {
                ll x;
                cin>>x;
                check[x]++;
                b.push_back({x,i+1});
            }
        ll flag=0;
        for(ll i=1;i<=k;i++)
        {
            if(check[i]>a[i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(b.begin(),b.end());
        vector<ll>ans;
        for(ll i=n-1;i>=0;i--)
        {
             ll c=k-b[i].first+1;
                for(ll j=0;j<c;j++)
                    ans.push_back(b[i].second);
        }
        cout<<ans.size()<<endl;
        for(ll i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;


    }
}
