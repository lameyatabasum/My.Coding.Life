#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a, max(b,c));
        int mn=min(a, min(b,c));
        int mid=a+b+c-mx-mn;

        if(mx%mn==0 && mid%mn==0)
        {
            if((mx/mn -1 + mid/mn-1)<=3)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
