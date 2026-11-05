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
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<m;i++)
            cin>>b[i];
        if(m*2>n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll i=0,j=n-m;
        ll f=0;
        for(ll k=0;k<m;k++)
        {
            if(a[i]>b[k] || b[k]>a[j])
               {
                   f=1;
                   break;
               }
               i++;
               j++;
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
