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
        ll n,k,m;
        cin>>n>>k>>m;
        if(k>m)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            vi a;
            for(ll i=1;i<=k-1;i++)
            {
                a.push_back(1);
            }
            a.push_back(m-k+1);
            ll r=n%k;
            for(ll i=1;i<=n/k;i++)
            {
                for(ll j=0;j<k;j++)
                {
                    cout<<a[j]<<" ";
                }
            }
            for(ll j=0;j<r;j++)
                cout<<a[j]<<" ";
            cout<<endl;
        }
    }
}
