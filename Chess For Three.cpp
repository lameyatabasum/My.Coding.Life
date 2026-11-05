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
        int sum=a+b+c;

        if(sum%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        else
        {
            int h=sum/2;
            int ans=min(h, a+b);
            cout<<ans<<endl;
        }
    }
}
