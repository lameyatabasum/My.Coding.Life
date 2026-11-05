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
        ll l=s.size();
        string c="";
        for(ll i=0;i<l;i++)
        {
            if(s[i]=='T')
                c+='T';
        }
        cout<<c;
        for(ll i=0;i<l;i++)
        {
            if(s[i]=='T')
                continue;
            cout<<s[i];
        }
        cout<<endl;
    }
}
