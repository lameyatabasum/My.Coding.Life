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
        int y,r;
        cin>>y>>r;
        int sum=(y/2)+r;
        cout<<min(n,sum)<<endl;
    }
}
