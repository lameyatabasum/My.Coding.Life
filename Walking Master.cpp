#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)
            cout<<-1<<endl;
        else
        {
            long long ans=abs(d-b);
            a+=(d-b);
            if(a<c)
                cout<<-1<<endl;
            else
            {
                ans+=abs(a-c);
                cout<<ans<<endl;
            }

        }
    }
}
