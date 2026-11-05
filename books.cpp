#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int l=0;
    int index=0;
    for(int i=0;i<n;i++)
    {
      sum+=a[i];
      while(sum>t)
      {
          sum-=a[l];
          l++;
      }
      index=max(i-l+1,index);
    }
    cout<<index<<endl;

}
