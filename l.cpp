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
    ll n;
    cin>>n;
    vi a(n);
    ll mx=0;
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
    vi b=a;
    sort(a.begin(),a.end());
    ll f=0;
    for(ll i=0;i<n;i++)
    {
        if(f==0 && b[i]==a[n-1])
        {
            cout<<b[i]*a[n-2]<<" ";
            f=1;
            continue;
        }
        cout<<b[i]*a[n-1]<<" ";

    }
    cout<<endl;
}
