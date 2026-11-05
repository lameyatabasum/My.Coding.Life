#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==1)
            cout<<2<<endl;
        else
        {
        long long ans=n/3;
            //cout<<n%3<<" "<<n/3<<endl;
            if(n%3>0)
                ans++;

            cout<<ans<<endl;
        }
    }
}
