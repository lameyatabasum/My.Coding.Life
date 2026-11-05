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
        vector<ll>b(n);
        vector<ll>a(n+1,0);
        int flag=0;
        for(int i=0;i<n;i++)
            cin>>b[i];
        a[b[0]]++;
        for(int i=1;i<n-1;i++)
        {
            a[b[i]]++;
            if(a[b[i]-1]==0&&a[b[i]+1]==0 )
                flag=1;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
     }
}
