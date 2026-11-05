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
      ll n,m,d;
      cin>>n>>m>>d;
      ll sum=d/m + 1;
      if(n>sum)
      {
          cout<<(n+sum-1)/sum<<endl;
      }
      else
        cout<<1<<endl;
    }
}

