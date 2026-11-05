#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int sum=n;
    int temp=n;
    while(temp>=p)
    {
        int f=temp/p;
        sum+=f;
        temp=f + temp%p;
    }
    cout<<sum<<endl;
}
