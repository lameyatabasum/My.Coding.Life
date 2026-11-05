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
        if(n%2!=0)
        {
            if(k==1)
            {
                cout<<"YES"<<endl;
                for(ll i=1;i<=n;i++)
                    cout<<i<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
            ll c1=0;
            for(ll i=1;i<k*n;i+=2)
            {
                cout<<i<<" ";
                c1++;
                if(c1%k==0)
                    cout<<endl;
            }
            ll c2=0;
            for(ll i=2;i<=k*n;i+=2)
            {
                cout<<i<<" ";
                c2++;
                if(c2%k==0)
                    cout<<endl;
            }
        }
    }
}
