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
        ll f=0,c=1,sum=1;
        for(ll i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
                //cout<<c<<endl;
            }
            else
            {
                sum++;
                //cout<<sum<<endl;
                if(c>1)
                    f=1;
                c=1;
            }
        }
        if(c>1)
            f=1;
        if(s[0]!=s[n-1] &&f==1)
            {
                sum++;
                cout<<sum<<endl;
            }
        else
            cout<<sum<<endl;
    }
}

