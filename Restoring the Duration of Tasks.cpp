#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        long long mx=0;
        for(int i=0;i<n;i++)
        {
            long long d=b[i]-a[i];
            if(a[i]>mx)
              {
                  cout<<d<<" ";
              }
            else
            {
                cout<<b[i]-mx<<" ";


            }
             mx=max(b[i],mx);
        }
        cout<<endl;
    }
}
