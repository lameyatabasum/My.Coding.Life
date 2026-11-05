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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
          if(a[i]==1)
            continue;
          sum+=a[i];
        }
        sum+=a[n-1];
        cout<<sum<<endl;

    }
}

