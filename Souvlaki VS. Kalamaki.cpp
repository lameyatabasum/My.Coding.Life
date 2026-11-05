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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a.begin(),a.end());
        for(int i=1;i<n-1;i+=2)
        {
                if(a[i]!=a[i+1])
                    flag=1;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
