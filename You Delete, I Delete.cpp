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
       ll i1=-1,i2=-1;
       for(ll i=0;i<s.length();i++)
       {
           if(s[i]=='1')
           {
               i1=i;
               break;
           }
       }
       for(ll i=0;i<s.length();i++)
       {
           if(s[i]=='0')
           {
               i2=i;
               break;
           }
       }
       for(ll i=0;i<s.size();i++)
       {
           if(i==i1 || i==i2)
            continue;
           cout<<s[i];
       }
       cout<<endl;

    }
}
