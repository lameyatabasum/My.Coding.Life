#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
     vector<int>b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            sum+=a[i];
            a[i]=0;
        }

    }
    long long mx=0,sm=0,l=0;
    for(int i=0;i<n;i++)
    {
        sm+=a[i];
        if(i-l+1>k)
        {
            sm-=a[l];
            l++;
        }
        mx=max(sm,mx);
    }
    mx=max(sm,mx);
    cout<<sum+mx<<endl;
}
