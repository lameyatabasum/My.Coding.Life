#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int temp=l*2;
        if(temp>r)
            cout<<-1<<" "<<-1<<endl;
        else
            cout<<l<<" "<<temp<<endl;
    }
}
