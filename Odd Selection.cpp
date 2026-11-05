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
      ll n,x;
      cin>>n>>x;
      int fo=0,fe=0;
      ll sum=0;
      for(int i=0;i<n;i++)
      {
          ll f;
          cin>>f;
          if(f%2!=0)
            fo=1;
          else
            fe=1;
            sum+=f;
      }
      if(n==x)
      {
          if(sum%2==0)
            cout<<"No"<<endl;
          else
            cout<<"Yes"<<endl;
            continue;
      }
      if(x%2==0)
      {
          if(fo==1 && fe==1)
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;
      }
      else
      {
          if(fo==1)
            cout<<"Yes"<<endl;
          else
            cout<<"No"<<endl;
      }
    }
}



