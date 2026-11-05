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
        ll c=0,mx=0;
        ll i=0;
        while(i<n)
        {
            while(s[i]=='#')
            {
                c++;
                i++;
            }
            mx=max(mx,c);
            c=0;
            i++;
        }
        cout<<(mx+1)/2<<endl;

    }
}

