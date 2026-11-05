#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
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
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        ll gcd=0, mx=a[0];
        for(ll i=0;i<n-1;i++)
        {
            mx=max(mx,a[i]);
            gcd=__gcd(gcd, abs(a[i]-a[i+1]));
        }
        mx=max(mx,a[n-1]);
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ans+=((mx-a[i])/gcd);
        }
        sort(a.rbegin(),a.rend());
        ll k=0,flag=0;
        for(ll i=0;i<n;i++)
        {
            ll temp=mx-gcd*k;
            //cout<<temp<<endl;
            if(temp!=a[k])
               {
                ans+=k;
                flag=1;
                break;
               }
               k++;
        }
        if(flag==0)
           ans+=k;

        //cout<<mx<<endl;
        //cout<<gcd<<endl;
        cout<<ans<<endl;
     }
}
