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
        string s1,s2;
        cin>>s1>>s2;
        ll c1=0;
        ll c2=0;
        for(int i=0;i<n;i++)
            if(s1[i]=='(')
               c1++;
         for(int i=0;i<n;i++)
            if(s2[i]=='(')
               c2++;
            //cout<<c1<<" "<<c2<<endl;
        if(c1+c2==n)
        {
            if(s1[0]=='('&&s1[n-1]==')'&&s2[0]=='('&&s2[n-1]==')')
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
