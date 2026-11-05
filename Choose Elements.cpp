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
    ll n,k;
    cin>>n>>k;
    vi a(n);
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a.rbegin(),a.rend());
    ll sum=0;
    for(ll i=0;i<k;i++)
        {
           if(a[i]>0)
              sum+=a[i];
        }
    cout<<sum<<endl;
}
