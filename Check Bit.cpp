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
    ll n,x;
    cin>>n>>x;
    vi a;
    while(n>0)
    {
        a.push_back(n%2);
        n/=2;
    }
    reverse(a.begin(),a.end());
    if(a[x-1]==1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
