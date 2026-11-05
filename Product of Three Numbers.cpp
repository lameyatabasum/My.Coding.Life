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
        long long x=0;
        for(long long i=2;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    x=i;
                    n/=i;
                    break;
                }
            }
        long long y=0;
        for(long long i=x+1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                y=i;
                n/=i;
                break;
            }
        }
        if(n!=x && n!=y &&n>1 && x>1 && y>1)
            {
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<n<<endl;
            }
        else
            cout<<"NO"<<endl;

    }
}
