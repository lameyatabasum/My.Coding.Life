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
        for(ll i=0;i<n;i++)
            cin>>a[i];
        vi p;
        ll mx=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                p.push_back(i);
                mx=max(mx,a[i]-a[i+1]);
            }
        }
        p.push_back(n);
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
                a[i+1]+=mx;
        }
        ll f=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
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
