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
        int f2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==67)
                f2=1;
        }
        if(f2==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
