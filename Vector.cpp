#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    vector<long long>a;
    while(q--)
    {
        long long x;
        cin>>x;
        if(x==0)
        {
            long long y;
            cin>>y;
            a.push_back(y);
        }
        else if(x==1)
        {
            long long y;
            cin>>y;
            if(!a.empty())
            cout<<a[y]<<endl;
        }
        else
        {
            if(!a.empty())
                a.pop_back();
        }

    }
}
