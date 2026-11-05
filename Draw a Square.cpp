#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,d,u;
        cin>>l>>r>>d>>u;
        if(r==l&&l==d&&d==u)
            cout<<"YES"<<endl;
        else
            cout<<"No"<<endl;
    }
}
