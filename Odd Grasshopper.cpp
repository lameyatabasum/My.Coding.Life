#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,n;
        cin>>x>>n;
        if(n==0)
            cout<<x<<endl;
        else
        {
        long long f=n-1;
        long long d=f;
        d-=(f%4);
        long long sum=0;
        if(x%2==0)
        {
            sum-=d;
            sum-=1;
            if(f%4==3)
                {
                    sum+=(n-3);
                }
            else if(f%4==2)
            {
                sum+=(2*n -1);
            }
            else if(f%4==1)
                sum+=n;

        }
        else
        {
            sum+=d;
            sum+=1;
            if(f%4==3)
                {
                    sum+=(-n+3);
                }
            else if(f%4==2)
            {
                sum+=(-2*n +1);
            }
            else if(f%4==1)
                sum-=n;

        }
        cout<<x+sum<<endl;
        }

    }
}
