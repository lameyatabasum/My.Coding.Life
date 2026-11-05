#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mx= max(a,b);
    int mn=min(a,b);

    int sum= (mx*(mx+1)/2)-(mn*(mn-1)/2);
    cout<<sum<<endl;
    if(mx%2!=0)
        mx=mx-1;
    if(mn%2!=0)
        mn=mn+1;
    int n= (mx-mn)/2 + 1;
    int sumeven= n*(mx+mn)/2;
    cout<<sumeven<<endl;
    cout<<sum-sumeven<<endl;
}

