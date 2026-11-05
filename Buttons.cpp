#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a=(c+1)/2 +a;
        b=c-(c+1)/2 +b;
        if(a>b)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;


    }
}
