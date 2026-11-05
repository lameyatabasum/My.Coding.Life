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
        ll n,m;
        cin>>n>>m;
        vi a(n),b(m);
        vi p(n+1,0);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            p[i+1]=p[i]+a[i];
        }
        for(ll i=0;i<m;i++)
            cin>>b[i];
        sort(b.rbegin(),b.rend());
        ll sum=0;
        for(ll i=0;i<m-1;i++)
        {
            ll temp=p[b[i]]-p[b[i+1]];
            sum+=max(temp,-temp);
        }
        sum+=max(p[b[m-1]],-p[b[m-1]]);
        for(ll i=b[0];i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;


    }
}
