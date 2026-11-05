#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long e1,e2,e3;
        cin>>e1>>e2>>e3;

        long long c1=e1-1;
        long long c2;
        if(e2>e3)
         c2=e2-1;
        else
          c2=(e3-e2)+(e3-1);
        if(c1<c2)
            cout<<1<<endl;
        else if(c1>c2)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
}
