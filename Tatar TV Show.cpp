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
        for(ll i=0;i<n-k;i++)
        {
            if(s[i]=='1')
            {
                s[i]='0';
                if(s[i+k]=='1')
                    s[i+k]='0';
                else
                    s[i+k]='1';
            }
        }
    ll f=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }

}
