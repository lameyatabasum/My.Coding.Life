#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>m;

        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int sum=0;
        for(auto x: m)
        {
            if(x.second<k)
                sum+=(k-x.second);
        }
        int temp=(7-m.size())*k;
        cout<<sum+temp<<endl;
    }
}
