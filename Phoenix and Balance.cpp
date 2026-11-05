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
    if(n==2)
        cout<<2<<endl;
    else
    {
    long long ans1=(1LL<<n);
    for(int i=1;i<n/2;i++)
    {
        long long a=(1LL << i);
        ans1+=a;
    }
    long long ans2=0;
    for(int i=n/2;i<n;i++)
    {
        long long a=(1LL << i);
        ans2+=a;
    }
    cout<<ans1-ans2<<endl;
    }
    }
}

