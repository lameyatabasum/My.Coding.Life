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
        vector<int>a(n);
        int flag=0;
        cin>>a[0];
        for(int i=1;i<n;i++)
            {
                cin>>a[i];
                if(a[i-1]!=a[i])
                    flag=1;
            }
        if(flag==0)
            cout<<"NO"<<endl;
        else
        {
            sort(a.rbegin(),a.rend());
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
            for(int i=0;i<n-1;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
