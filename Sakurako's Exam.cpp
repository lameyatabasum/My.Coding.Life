#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int b1=b%2;
        int a1=a-(b1*2);
        if(a1>=0 && a%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
