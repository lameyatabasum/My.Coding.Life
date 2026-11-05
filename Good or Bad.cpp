#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        bool p=(a.find("101")!=string :: npos);
        bool p1=(a.find("010")!=string :: npos);

        if(p || p1)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
    }
}
