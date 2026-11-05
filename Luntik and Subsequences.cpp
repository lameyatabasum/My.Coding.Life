#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,c0=0,c1=0;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c1++;
            if(a[i]==0)
                c0++;
        }
          cout<<(((1LL<<c0) - 1)*c1 +c1)<<endl;
    }
}
