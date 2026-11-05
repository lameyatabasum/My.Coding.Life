#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
        {
            cout<<2<<endl;
        }
        else if(x==y||x-1==y||y==1)
        {
             cout<<-1<<endl;
        }
        else
            cout<<3<<endl;
    }
}
