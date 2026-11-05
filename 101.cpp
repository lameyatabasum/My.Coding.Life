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
        vi a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll b=0,e=n-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                b=i;
                break;
            }
            if(a[i]==-1)
            {
                a[i]=1;
                b=i;
                break;
            }
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                e=i;
                break;
            }
            if(a[i]==-1)
            {
                a[i]=1;
                e=i;
                break;
            }
        }
        for(ll i=b+1;i<e;i++)
        {
            if(a[i]==-1)
                a[i]=0;
        }
        for(ll i=0;i<n;i++)
           cout<<a[i]<<" ";
        cout<<endl;
    }
}
