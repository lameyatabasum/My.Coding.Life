#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long c=0;

        while(1)
        {
            if(a<=b)
            {
                a+=b;
            }
            else
                b+=a;
            c++;
            if(a>n ||b>n)
                break;
        }
        cout<<c<<endl;
    }
}
