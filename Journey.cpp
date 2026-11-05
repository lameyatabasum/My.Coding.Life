#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b,c;
        cin>>n>>a>>b>>c;

        long long d=a+b+c;
        long long f=n%d;
        long long ans=0;
        if(0<f && f<=a)
            ans++;
        else if(a<f && f<=(a+b))
            ans+=2;
        else if((a+b)<f && f<=(a+b+c))
            ans+=3;
        ans+=(n/d)*3;
        cout<<ans<<endl;


    }
}
