#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long w,h,n;
       cin>>w>>h>>n;
        long long c=1;

        while(w%2==0)
        {
            c*=2;
            w/=2;
        }N
        while(h%2==0)
        {
            c*=2;
            h/=2;
        }
        if(c>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
