#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
ll Distinct_Value_Subarrays(vector<ll>&a, ll k)
{
    ll l=0,r=0,c=0;
    unordered_map<ll, ll>m;
    while(r<a.size())
    {
        m[a[r]]++;
        while(m.size()>k)
        {
            m[a[l]]--;
            if(m[a[l]]==0)
                m.erase(a[l]);
            l++;
        }
        c+=(r-l+1);
        r++;
    }
    return c;
}
int main()
{
    fast
    ll n,k;
    cin>>n>>k;
    vi a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    cout<<Distinct_Value_Subarrays(a,k);

}
