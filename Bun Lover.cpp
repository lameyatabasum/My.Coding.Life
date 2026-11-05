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
        long long f=n-2;
        long long sum=f*(f+1);
        sum=sum+1+(n-1)+(4*n);
        cout<<sum<<endl;
    }
}
