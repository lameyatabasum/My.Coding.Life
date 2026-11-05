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
        string s;
        cin>>s;
        ll n=s.size();
        if(n==1)
            {
                cout<<0<<endl;
                continue;
            }
        ll f=0;
        for(ll i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<n+1<<endl;
        }
        else
            cout<<n<<endl;
    }
}
