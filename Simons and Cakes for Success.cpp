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
        ll ans=1;
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                ans*=i;
            }
            while(n%i==0)
                {
                    n/=i;
                }
        }
        if(n>1)
          {
            ans*=n;
          }
        cout<<ans<<endl;
    }
}
