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
          ll c=0;
            for(ll i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1])
                    c++;
            }
            if(c==1)
                cout<<2<<endl;
            else
                cout<<1<<endl;

    }
}
