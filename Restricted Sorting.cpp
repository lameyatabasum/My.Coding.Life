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
            cin>>a[i];
        b=a;
        sort(a.begin(),a.end());
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            mx=max(mx,abs(b[i]-a[i]));
        }
        if(mx==0)
            cout<<-1<<endl;
        else
            cout<<mx<<endl;
    }
}
