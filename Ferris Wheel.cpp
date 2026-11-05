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
    ll n,x;
    cin>>n>>x;
    vi a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll c=0,i=0,j=n-1;
    while(i<=j)
    {
        if((a[i]+a[j])<=x)
        {
            i++;
            j--;
        }
        else
            j--;
        c++;
    }
    cout<<c<<endl;
}
