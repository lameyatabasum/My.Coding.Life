#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int idx=-1,mb=-1;
        for(int i=0;i<n;i++)
        {
            if(b[i]>=mb && a[i]+i<=s)
            {
                mb=b[i];
                idx=i+1;
            }
        }
        cout<<idx<<endl;
    }
}
