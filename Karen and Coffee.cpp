#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main()
{
    fast
    ll n,k,q;
    cin>>n>>k>>q;

    vector<ll>f(200001,0);

    while(n--)
    {
        ll l,r;
        cin>>l>>r;
        f[l]++;
        if(r+1<=200000)
            f[r+1]--;
    }

    for(int i=1;i<=200000;i++)
        f[i]+=f[i-1];

    for(int i=0;i<=200000;i++)
    {
        if(f[i]>=k)
            f[i]=1;
        else
           f[i]=0;
    }

    for(int i=1;i<=200000;i++)
        f[i]+=f[i-1];

    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<f[b]-f[a-1]<<endl;
    }
}
