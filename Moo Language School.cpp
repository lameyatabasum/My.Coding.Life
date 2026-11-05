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
        string s;
        cin>>s;
        ll c=0;
        for(ll i=0;i<n;i+=k)
        {
            ll f=0;
            for(ll l=i;l<(i+k);l++)
            {
                if(s[l]=='0')
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                c++;
        }
        cout<<c<<endl;
    }
}
