#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long >a(n);
        vector<long long >b(n);
        for(long long i=0;i<n;i++)
            cin>>a[i];
         for(long long i=0;i<n;i++)
            cin>>b[i];
        long long mx=0;
        long long mn=0;
        for(long long i=0;i<n;i++)
        {
            long long nmx=max(mx-a[i],b[i]-mn);
            long long nmn=min(mn-a[i],b[i]-mx);
            mx=nmx;
            mn=nmn;
        }
        cout<<mx<<endl;
    }
}
