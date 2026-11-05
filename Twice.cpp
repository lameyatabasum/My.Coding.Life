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
        int sum=0;
        for(auto x : m)
        {
            sum+=(x.second)/2;
        }
        cout<<sum<<endl;
    }
}
