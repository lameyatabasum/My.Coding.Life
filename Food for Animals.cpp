#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        long long rdog=max(0LL,x-a);
        long long rcat=max(0LL,y-b);
        long long rtotal=rcat+rdog;
        if(rtotal<=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
