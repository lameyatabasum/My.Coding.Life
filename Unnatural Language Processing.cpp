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
        string c="";
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='b'|| s[i]=='c'||s[i]=='d')
                c+='C';
            else
                c+='V';
        }
        cout<<s[0];
        for(ll i=1;i<n-1;i++)
        {
            if(c[i]=='V')
            {
                cout<<s[i];
                continue;
            }
            if(c[i]==c[i+1])
                cout<<s[i]<<'.';
            else
            {
                if(c[i]!=c[i-1])
                    cout<<'.';
                cout<<s[i];
            }
        }
        cout<<s[n-1];
        cout<<endl;
    }
}
