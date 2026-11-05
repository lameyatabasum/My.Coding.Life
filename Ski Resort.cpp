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
        ll n,k,q;
        cin>>n>>k>>q;
        ll c=0,ans=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x<=q)
            {
                c++;
            }
            else
            {
                if(c>=k)
                {
                    ll d=c-k+1;
                    ans+=(d*(d+1)/2);
                }
                c=0;
            }
        }
        if(c>=k)
        {
           ll d=c-k+1;
           ans+=(d*(d+1)/2);
        }
        cout<<ans<<endl;
     }
}

