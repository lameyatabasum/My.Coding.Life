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
        vi a(n),b(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
            cin>>b[i];
        ll mx=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                sum+=a[i];
                mx=max(mx,b[i]);
            }
            else
            {
                sum+=b[i];
                mx=max(mx,a[i]);
            }
        }
        cout<<sum+mx<<endl;
    }
}

