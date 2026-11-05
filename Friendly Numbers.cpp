#include<bits/stdc++.h>
using namespace std;
bool FN(long long x,long long n)
{
    long long sum=0,temp=n;
    while(n>0)
    {
        long long c=n%10;
        sum+=c;
        n/=10;
    }
    if((temp-sum)==x)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long x;
        cin>>x;
        if(x<9)
            cout<<0<<endl;
        else
            {
                int c=0;
                for(long long i=x;i<=x+81;i++)
                {
                    if(FN(x,i))
                        c++;
                }
                cout<<c<<endl;
            }


    }
}
