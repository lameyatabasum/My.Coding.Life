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
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long mn=a[0];

        vector<long long>b,c;
        for(int i=0;i<n;i++)
        {
            if(mn%a[i]==0)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
        if(b.size()==0 || c.size()==0)
            cout<<-1<<endl;
        else
        {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++)
                cout<<b[i]<<" ";
            cout<<endl;
            for(int i=0;i<c.size();i++)
                cout<<c[i]<<" ";
            cout<<endl;
        }
    }
}
