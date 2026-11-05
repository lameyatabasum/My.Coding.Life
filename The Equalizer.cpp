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
        ll n,k;
        cin>>n>>k;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if((n*k)%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
     }
}
