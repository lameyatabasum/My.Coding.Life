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
        vector<int>a(n);
        vector<int>b(n);
        int ax=0,mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ax^=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            mx^=b[i];
        }
        if(ax==mx)
        {
            cout<<"Tie"<<endl;
            continue;
        }
        int e=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                e=i+1;
            }
        }
        if(e%2!=0)
        {
                cout<<"Ajisai"<<endl;
        }
        else
        {
            cout<<"Mai"<<endl;
        }

    }
}
