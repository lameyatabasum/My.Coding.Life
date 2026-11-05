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
        if(n%2==0)
            {
                long long temp=n-2;
                    if((temp/2)%2==0)
                      cout<<"NO"<<endl;
                   else
                      cout<<"YES"<<endl;
            }
        else
            cout<<"NO"<<endl;
    }
}
