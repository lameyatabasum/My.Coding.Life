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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        for(ll i=1;i<=n;i*=2)
        {
            ll temp=min(k,n/i);
            ans+=temp;
            n-=temp*i;
        }
        cout<<ans<<endl;
    }

}
