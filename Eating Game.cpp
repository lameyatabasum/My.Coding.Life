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
        int mx=0;
        for(int i=0;i<n;i++)
           {
               cin>>a[i];
               if(a[i]>=mx)
                   mx=a[i];
           }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(mx==a[i])
                c++;
        }
        cout<<c<<endl;
    }
}
