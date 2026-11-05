#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
int main()
{
       fast

        ll n,q;
        cin>>n;
        vi v(n);
        vi a(n+1);
        ll sum=0;
        a[0]=0;
        for(int i=1;i<=n;i++)
            {
                ll x;
                cin>>x;
                v.push_back(x);
                a[i]=a[i-1]+x;
                sum+=x;
                //cout<<a[i]<<" ";
            }
        vi a1(n+1);
        sort(v.begin(),v.end());
        a1[0]=0;
        for(int i=1;i<=n;i++)
        {
            a1+=v[i-1];
        }
        cin>>q;
        while(q--)
        {
            ll t,l,r;
            cin>>t>>l>>r;
            if(t==1)
               {
                   ll a_sum=a[r]-a[l-1];
               cout<<a_sum<<endl;
               }
            else if(t==2)
            {
                ll a1_sum=a[r]-a[l-1];
                cout<<a1_sum<<endl;
            }

        }
     }
}


