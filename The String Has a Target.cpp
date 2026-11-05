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
        string s;
        cin>>s;
        ll idx=n;
        char a=s[0];
        ll f=0;
        for(ll i=1;i<n;i++)
        {
            if(s[i]<=a)
            {
                idx=i;
                a=s[i];
                f=1;
            }
        }
        s.erase(idx,1);
        if(f==1)
         cout<<a<<s<<endl;
        else
            cout<<s<<endl;
    }
}

