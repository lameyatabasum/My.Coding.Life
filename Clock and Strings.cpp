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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        string s;
        for(int i=1;i<=12;i++)
        {
            if(a==i || b==i)
                s+='a';
            else if(c==i || d==i)
                s+='b';
        }
        if(s=="abab"|| s=="baba")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
     }
}

