#include<bits/stdc++.h>
using namespace std;
int count_length(int n)
{
    int c=1;
  while(n!=1)
  {
      if(n%2==0)
        n/=2;
      else
        n=(3*n + 1);
      c++;
  }
  return c;
}
int main()
{
    vector<int>a;
    for(int i=1;i<=1000000;i++)
    {
        a.push_back(count_length(i));
    }
    int i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>i>>j;
        int l=min(i,j);
        int r=max(i,j);
        int mx=0;
        for(int m=l-1;m<r;m++)
        {
            mx=max(mx,a[m]);
        }
        cout<<i<<" "<<j<<" "<<mx<<endl;
    }

}

