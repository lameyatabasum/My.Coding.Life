#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,a,b;
        cin>>l>>a>>b;

        int n=l/__gcd(l,b);

        long long sum=0,mx=0;
        for(int i=0;i<n;i++)
        {
            sum=(a + i*b)%l;

            mx=max(mx,sum);
        }

        cout<<mx<<endl;
    }
}
