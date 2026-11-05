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
        map<long long,long long>m;
        int x;
        long long sum=0;
        for(long long i=1;i<=n;i++)
        {
            cin>>x;
            m[x-i]++;
        }
        for(auto f : m)
        {
            long long j=f.second;
            sum+=(j*(j-1)/2);
        }
        cout<<sum<<endl;
    }
}
