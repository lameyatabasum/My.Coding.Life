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
        vi a(n+1);
        for(ll i=1;i<=n;i++)
        {
            a[i]=i;
        }
        if(n%3==0 && n&2==0)
        {
           for(ll i=1;i<=n;i+=4)
            {
            if(i+1<=n)
                swap(a[i],a[i+1]);
            }
        }
        else
        {
            for(ll i=2;i<=n;i+=4)
            {
            if(i+1<=n)
                swap(a[i],a[i+1]);
            }
        }
        cout<<a[1];
        for(ll i=2;i<=n;i++)
            cout<<" "<<a[i];
        cout<<endl;
    }
}
