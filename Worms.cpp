#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int f;
        cin>>f;
        sum+=f;
        a[i]=sum;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int q;
        cin>>q;
       int idx = lower_bound(a.begin(), a.end(), q) - a.begin();
       cout<<idx+1<<endl;
    }
}
