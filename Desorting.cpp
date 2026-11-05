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
        cin>>a[0];
        long long d=INT_MAX,flag=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i-1]>a[i])
                flag=1;
            d=min(d,a[i]-a[i-1]);
        }
        if(flag==1)
            cout<<0<<endl;
        else
        {
            cout<<d/2 + 1<<endl;
        }
    }
}
