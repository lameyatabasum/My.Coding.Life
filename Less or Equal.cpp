#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    if(k==0)
    {
        if(a[0]==1)
            cout<<-1<<endl;
        else
            cout<<a[0]-1<<endl;
    }
    else if(k>n)
    {
        cout<<-1<<endl;
    }
    else
    {
        long long x=a[k-1];
        if(k<n && a[k]==x)
            cout<<-1<<endl;
        else
            cout<<x<<endl;
    }
}
