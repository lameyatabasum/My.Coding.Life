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
        long long ans=0;
       while(n>0)
       {
           ans++;
           n/=2;
       }
       //cout<<ans;
       cout<<((1LL<<(ans-1))-1)<<endl;
    }
}
