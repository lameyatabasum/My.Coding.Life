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
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll i=0, j=n-1;
    while(i<j)
    {
        cout<<a[i]<<" "<<a[j]<<" ";
        i++;
        j--;
    }
    if(n%2!=0)
    {
        cout<<a[n/2];
    }
    cout<<endl;
}
