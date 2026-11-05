#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    map<string, string>f;
    for(int i=0;i<m;i++)
    {
        string x,y;
        cin>>x>>y;
        f[x]=y;

    }
    //vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(f[s].length()<s.length())
            cout<<f[s]<<" ";
        else
            cout<<s<<" ";
    }
    cout<<endl;

}
