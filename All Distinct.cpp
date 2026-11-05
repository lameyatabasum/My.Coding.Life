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
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }

        int l=m.size();
        if(l%2==n%2)
            cout<<l<<endl;
        else
            cout<<l-1<<endl;
    }
}
