#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second)
        return a.first > b.first;
    return a.second > b.second;   //BtoS
}
int main()
{
    fast
    ll n,q;
    cin>>n>>q;
    vi a(n);
    vector<ll>f(n+1,0);
    for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
    sort(a.rbegin(),a.rend());
    while(q--)
    {
       ll l,r;
       cin>>l>>r;
       f[l-1]++;
       f[r]--;
    }

    for(int i=1;i<=n;i++)
    {
        f[i]=f[i]+f[i-1];
    }
    f.pop_back();
    sort(f.rbegin(),f.rend());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(f[i]*a[i]);
    }
    cout<<sum<<endl;
}
