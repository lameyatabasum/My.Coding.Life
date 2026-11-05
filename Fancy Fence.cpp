#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        //x = (n-2)/180/n;

        int f=180-x;
        if(360%f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
