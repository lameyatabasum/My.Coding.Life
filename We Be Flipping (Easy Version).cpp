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
        {
            cin>>a[i];
        }
        ll f=1,c=0;
        vector<ll>b;
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]*f>0)
            {
                b.push_back(i+1);
                f=-f;
                c++;
            }
        }
        cout<<c<<endl;
        for(ll i=0;i<c;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}

