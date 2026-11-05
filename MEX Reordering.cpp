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
        ll c_0=0,c_1=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
                c_0++;
            else if(a[i]==1)
                c_1++;
        }
        if(c_0==0)
        {
            cout<<"NO"<<endl;
        }
        else if(c_0==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(c_1>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
