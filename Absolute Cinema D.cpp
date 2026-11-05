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
        vi a(n),ans(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll k=1;
        ll sum1=0;
        ll sumn=0;
        for(ll i=2;i<n;i++)
        {
            ans[k]=(a[i]-a[i-1]-a[i-1]+a[i-2])/2;
            sumn+=ans[k]*k;
            sum1+=ans[k]*(n-k-1);
            k++;
        }
        ans[n-1]=(a[0]-sumn)/(n-1);
        ans[0]=(a[n-1]-sum1)/(n-1);
        for(ll i=0;i<n;i++)
           cout<<ans[i]<<" ";
        cout<<endl;
    }
}
