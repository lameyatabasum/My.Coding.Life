#include<bits/stdc++.h>
using namespace std;
long long intTostring(int n)
{
    string s="";

    while(n>0)
    {
        long long f=n%10;
        if(f!=0)
        {
        s+=(n%10 +'0');
        }
        n/=10;
    }
    reverse(s.begin(),s.end());
    long long m=stoll(s);
    return m;
}
int main()
{
    long long a,b;
    cin>>a>>b;

    long long a1=intTostring(a);
    long long b1=intTostring(b);
    long long temp=intTostring(a+b);

    long long temp1=a1+b1;
    //cout<<temp<<temp1;
    if(temp==temp1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
