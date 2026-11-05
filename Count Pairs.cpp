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
        if (n < 0)
            {
            cout<<0<<endl;
            continue;
            }
        int temp=sqrt(n);
        int sum=0;
        for(long long i=temp;i>=1;i--)
        {
            int y=sqrt(n-i*i);
            sum+=4*y+2;
        }
        sum+=2*temp+1;
        cout<<sum<<endl;
    }
}
