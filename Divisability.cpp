#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if(a > b) swap(a, b);
    if(a%c!=0)
    {
        a=a+(c-a%c);
    }
    //cout<<a;
    if(b%c!=0)
    {
        b=b-b%c;
    }
    //cout<<b;
    if(a>b)
    {
        cout << 0 << endl;
        return 0;
    }
    long long n=(b-a)/c +1;
    long long sum= n*(a+b)/2;
    cout<<sum<<endl;
}
