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
        ll a,b,k;
        cin>>a>>b>>k;
        ll time=__gcd(a,b);
        if(max(a/time , b/time)>k)
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
}
