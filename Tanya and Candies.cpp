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
    vi a(n+1);
    ll odd[n+1]={0};
    ll even[n+1]={0};
    ll o=0,e=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%2!=0)
           odd[i]=a[i];
        else
           even[i]=a[i];

        odd[i]+=odd[i-1];
        even[i]+=even[i-1];
    }
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        if((odd[n]-odd[i]+e)==(even[n]-even[i]+o))
            c++;
        if(i%2==0)
            e+=a[i];
        else
            o+=a[i];
    }
    cout<<c<<endl;
}
