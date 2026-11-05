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
        for(int i=0;i<n/2;i++)
        {
            cout<<a[i]<<" ";
            cout<<a[n-i-1]<<" ";
        }
        if(n%2!=0)
            cout<<a[n/2];
        cout<<endl;

    }

}
