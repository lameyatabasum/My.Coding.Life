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
    ll n,m,k;
    cin>>n>>m>>k;
    vi a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=0,j=0;
    ll c=0;
    while(i<n && j<m)
    {
        if((a[i]-k)<=b[j] && (a[i]+k)>=b[j])
        {
            c++;
            i++;
            j++;
        }
        else if((a[i]-k)>b[j])
            j++;
        else if((a[i]+k)<b[j])
             i++;
    }
    cout<<c<<endl;
}

