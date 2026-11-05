#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

     int flag=0;
    for(int i=2;i*i<=n;i++)
    {
        int sum=0;

        if(n%i==0)
        {
            while(n%i==0)
            {
                sum++;
                n/=i;
            }
        }
        if(sum>0)
        {
        if(flag==1)cout<<'*';
        cout<<'('<<i<<'^'<<sum<<')';
        flag=1;
        }

    }
    if(n>1)
    {
        if(flag==1)
        cout<<'*';
        cout<<'('<<n<<'^'<<1<<')';
    }
}
