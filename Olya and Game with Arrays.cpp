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
        ll mn1=LLONG_MAX;
        ll mn2=LLONG_MAX;
        ll sum=0;
        while(n--)
        {
            ll n1;
            cin>>n1;
            vi a(n1);
            for(ll i=0;i<n1;i++)
                cin>>a[i];
            sort(a.begin(),a.end());
            //cout<<a[1]<<endl;
            sum+=a[1];
            mn1=min(mn1,a[0]);
            mn2=min(mn2,a[1]);

        }
        cout<<sum-mn2+mn1<<endl;
    }
}
