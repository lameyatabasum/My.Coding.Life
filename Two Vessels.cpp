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
        int d=abs(a-b);
        int ans=0;
        if(d==0)
            cout<<0<<endl;
        else
        {
            int h=(d+1)/2;
            if(h<=c)
                cout<<1<<endl;
            else
            {
                cout<<(h+c-1)/c<<endl;
            }
        }
    }
}
