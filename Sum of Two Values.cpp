#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(long long i=0;i<n;i++)
        cin>>a[i];

    map<long long,long long>m;

    vector<long long>ans;

    for(long long i=0;i<a.size();i++)
    {
        int f=a[i];
        int s=k-f;

        if(m.find(s)!=m.end())
        {
            cout<<i+1<<" "<<m[s]+1;
            cout<<endl;
            return 0;
        }
        m[f]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;

}
