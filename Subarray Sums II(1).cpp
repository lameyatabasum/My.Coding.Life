#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll c=0;
    ll sum=0;
    ll l=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];

        while(sum>=k)
        {
            if(sum==k)
                c++;

            sum-=a[l];
            l++;
        }
    }
    cout<<c<<endl;
}

