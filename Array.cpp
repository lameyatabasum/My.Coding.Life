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
        vector<ll>ans;
        for(ll i=0;i<n;i++)
        {
            ll b=0,s=0;
            for(ll j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    b++;
                else if(a[i]<a[j])
                    s++;
            }
            ans.push_back(max(s,b));
        }
        for(ll i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
