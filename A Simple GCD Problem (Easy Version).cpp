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
        for(ll i=0;i<n;i++)
            cin>>b[i];
        ll c=0;
        for(ll i=1;i<n-1;i++)
        {
            ll g1=__gcd(a[i-1],a[i]);
            ll g2=__gcd(a[i],a[i+1]);
            if(lcm(g1,g2)<a[i])
                c++;
        }
        if(__gcd(a[n-1],a[n-2])<a[n-1])
            c++;
        if(__gcd(a[0],a[1])<a[0])
            c++;
        cout<<c<<endl;

    }
}
