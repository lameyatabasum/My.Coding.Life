#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        if(c==a || c==b)
        {
            (c==a)?cout<<b: cout<<a;
            cout<<endl;
            continue;
        }
        long long diff=abs(a-b);
        if(max(a,max(b,c))>2*diff)
        {
            cout<<-1<<endl;
            continue;
        }
        if(c-diff>0&&diff>1)
            cout<<c-diff<<endl;
        else if(c+diff<=2*diff&&diff>1)
            cout<<c+diff<<endl;
        else
            cout<<-1<<endl;
    }
}
