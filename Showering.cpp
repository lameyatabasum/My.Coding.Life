#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long n,s,m;
    cin>>n>>s>>m;
    vector<long long>a(n+1),b(n+1);
    a[0]=0,b[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];

    }
    long long f=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]-b[i-1]>=s)
        {
            f=1;
            break;
        }

    }
    if(f==0)
    {
        if(m-b[n]>=s)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
}
