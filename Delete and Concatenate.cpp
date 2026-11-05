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
        ll n,k;
        cin>>n>>k;
        vi a(n);
        ll sum_b=0,c_b=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=k)
            {
                sum_b+=a[i];
                c_b++;
            }
        }
        if(c_b>=(n-c_b))
        {
            cout<<sum_b-(c_b*k)<<endl;
        }
        else
        {
        sort(a.rbegin(),a.rend());
        ll sum=0;
        for(ll i=0;i<n/2;i++)
            sum+=a[i];
        if(n%2!=0)
        {
          sum+=a[n/2];
          sum-=(((n+1LL)/2LL)*k);
        }
        else
            sum-=(n/2LL)*k;
        cout<<sum<<endl;
        }
    }
}
