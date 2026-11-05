#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        int sy=(y+1)/2;
        int r= 15*sy - 4*y;
        //cout<<sy<<endl<<r<<endl;
        int ans =0;
        ans=sy;
        if(r<x)
        {
            ans+=(x-r+14)/15;
        }
        cout<<ans<<endl;
    }
}
