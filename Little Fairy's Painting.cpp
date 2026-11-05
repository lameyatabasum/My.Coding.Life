#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            cin>>f;
            s.insert(f);
        }
        long long c=s.size();
        auto ans=s.lower_bound(c);
        if(ans!=s.end())
          cout<<*ans<<endl;
        else
            cout<<c<<endl;
    }
}
