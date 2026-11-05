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
        vector<pair<int, int>>a;

        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        sort(a.begin(),a.end());
        /*for(auto x : a)
        {
            cout<<x.first<<" "<<x.second;
        }
        cout<<endl;*/
        string s="";
        for(int i=1;i<=a[0].first;i++)
            s+='R';
        for(int i=1;i<=a[0].second;i++)
            s+='U';
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i].first>a[i+1].first || a[i].second>a[i+1].second)
            {
                flag=1;
                break;

            }
            else
            {
                int y=a[i+1].first-a[i].first;
                for(int j=1;j<=y;j++)
                {
                 s+='R';
                }
                int x=a[i+1].second-a[i].second;
                for(int j=1;j<=x;j++)
                {
                    s+='U';
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl<<s<<endl;
        }
    }
}
