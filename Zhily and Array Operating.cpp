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
        ll c=0;
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i+1]<=0)
                continue;

            a[i]=a[i]+a[i+1];
            //cout<<a[i]<<endl;
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]>0)
                c++;
        }
        cout<<c<<endl;
    }
}

