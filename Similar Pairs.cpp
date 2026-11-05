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
        ll co=0,ce=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                ce++;
            else
                co++;
        }
        if(ce%2==0 && co%2==0)
            cout<<"YES"<<endl;
        else
        {
            sort(a.begin(),a.end());
            ll f=0;
            for(ll i=1;i<n;i++)
            {
                if(abs(a[i]-a[i-1])==1)
                {
                    f=1;
                    break;
                }

            }
            if(f==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
