#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<k)
            cout<<1<<endl<<n<<endl;
        else if(n==k)
        {
            cout<<2<<endl;
            int temp=n/2;
            cout<<temp<<" "<<n-temp<<endl;
        }
        else
        {
            if(n%k==0)
                {
                    cout<<2<<endl;
                    int temp=k-1;
                    cout<<temp<<" "<<n-temp<<endl;
                }
            else
            {
                cout<<1<<endl;
                cout<<n<<endl;
            }

        }
    }
}
