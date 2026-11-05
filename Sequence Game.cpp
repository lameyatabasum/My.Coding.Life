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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        long long x;
          cin>>x;
        if(n==1)
        {
            if(a[0]==x)
                cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            continue;
        }
        sort(a.begin(),a.end());
        if(a[0]<=x&&x<=a[n-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
