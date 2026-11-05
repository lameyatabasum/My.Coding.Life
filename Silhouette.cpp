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
        vi a(n);
        map<ll,ll>m,ans;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        if(!m.count(0))
        {
          cout<<-1<<endl;
          continue;
        }
        vector<pair<ll,ll>>p;
        for(auto x:m)
        {
            p.push_back({x.first,x.second});
        }

        ll sum=0;
        ll j=0;
        ll c_sum=0;
        ll mx=0;
        ll f=0;
        for(ll i=1;i<p.size();i++)
        {
            sum=p[i].first;
            j=p[i-1].second;
            if((sum-c_sum)%j!=0 || (sum-c_sum)/j<=mx)
            {
                cout<<-1<<endl;
                f=1;
                break;
            }
            ans[p[i-1].first]=(sum-c_sum)/j;
            mx=((sum-c_sum)/j);
            c_sum=sum;
        }
        ans[p.back().first]=mx + 1;
        if(f==1)
            continue;
        for(ll i=0;i<n;i++)
        {
            cout<<ans[a[i]]<<" ";
        }
        cout<<endl;
    }
}
