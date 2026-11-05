#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        vector<long long>p(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long mx=a[0],c=0;
        p[0]=a[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx,a[i]);
            p[i]=p[i-1]+a[i];
            long long temp=p[i]-mx;
            if(mx==temp)
                c++;

        }
        if(p[0]==0)
            c++;
        cout<<c<<endl;
    }
}
