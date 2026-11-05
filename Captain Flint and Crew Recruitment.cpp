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
        if(n<31)
            cout<<"NO"<<endl;

        else
        {
            cout<<"YES"<<endl;
            if(n==36)
            cout<<"5 6 10 15"<<endl;
            else if(n==40)
                cout<<6<<" "<<10<<" "<<22<<" "<<2<<endl;
            else if(n==44)
                cout<<6<<" "<<7<<" "<<10<<" "<<21<<endl;
            else
            {
            int temp=n-(2*3 + 5*2 + 7*2);
            cout<<2*3<<" "<<5*2<<" "<<2*7<<" "<<temp<<endl;
            }
        }
    }
}
