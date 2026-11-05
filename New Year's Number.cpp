#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int f=n/2020;
    int h=n%2020;
    if(f>=h)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
