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
        ll n;
        cin>>n;
        vi a(n),b;
        unordered_set<ll>s;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(s.find(a[i])==s.end())
               {
                 s.insert(a[i]);
                 b.push_back(a[i]);
               }
        }
        reverse(b.begin(),b.end());
        cout<<b.size()<<endl;
        for(auto i : b)
            cout<<i<<" ";
        cout<<endl;

}
