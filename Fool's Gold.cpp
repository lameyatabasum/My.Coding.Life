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
        ll temp=n;
        vector<pair<ll,ll>>f;
        ll ans=1;
        for(ll p=2;p*p<=temp;p++)
        {
            int c=0;

           while(temp%p==0)
            {
             c++;
              temp/=p;
            }

           if(c>0)
           {
             ans*=(c/2+1);
           }
        }
        ll s=sqrt(n);
        if(s*s==n)
            ans--;
        cout<<ans<<endl;
        }
}
