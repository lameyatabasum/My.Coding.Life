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
        ll n,q;
        cin>>n>>q;
        vi a(n+1);
        ll sum=0;
        a[0]=0;
        for(int i=1;i<=n;i++)
            {
                ll x;
                cin>>x;
                a[i]=a[i-1]+x;
                sum+=x;
                //cout<<a[i]<<" ";
            }

        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll a_sum=a[r]-a[l-1];
            //cout<<a_sum<<endl;
            ll n_sum=k*(r-l+1);
            ll r_sum=sum-a_sum;
            if(r_sum%2!=n_sum%2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
     }
}

