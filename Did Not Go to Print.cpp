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
        vector<ll>a(n,0);
        stack<ll>st;
        ll j=-1;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                st.push(i);
            }
            else if(s[i]=='2')
            {
                if(st.empty())
                {
                     a[i]=-1;
                }
                else
                {
                    a[st.top()]=-1;
                    st.pop();
                }
            }
        }
        ll c=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='3')
                continue;
            if(a[i]==0)
                c++;
        }
        cout<<c<<endl;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='3')
                continue;
            if(a[i]==0)
                cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
