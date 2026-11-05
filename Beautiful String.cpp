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
        string s;
        cin>>s;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                a.push_back(i);
        }
        cout<<a.size()<<endl;
        for(int i=0;i<a.size();i++)
            cout<<a[i]+1<<" ";
            cout<<endl;
    }
}
