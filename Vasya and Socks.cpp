#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int sum=n;
    while(n>=p)
    {
        sum+=n/p;
        n= n/p + n%p;
    }
    cout<<sum<<endl;

}
