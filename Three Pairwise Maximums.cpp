#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long mx=max(a,max(b,c));

        int cnt=0;
        if(mx==a)
            cnt++;
        if(mx==b)
            cnt++;
        if(mx==c)
            cnt++;
        if(cnt>=2)
        {
            cout<<"YES"<<endl;

            cout<<min(a,b)<<" "<<min(a,c)<<" "<<min(b,c)<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
