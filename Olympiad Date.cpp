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
        for(int i=0;i<n;i++)
            cin>>a[i];
        int idx=0,flag=0;
        map<int, int>m;
        m[0]=3;
        m[1]=1;
        m[2]=2;
        m[3]=1;
        m[5]=1;
        for(auto x : m)
        {
            int id=0,c=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==x.first)
                {
                    id=i;
                    c++;

                }
                if(c==x.second)
                {
                    idx=max(id,idx);
                    break;
                }
            }
            if(c<x.second)
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            cout<<0<<endl;
        else
        {
            cout<<idx+1<<endl;
        }
    }
}
