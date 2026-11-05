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
        map<int, int>freq;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int sum=0;
        for(auto x: freq)
        {
            if(x.second>x.first)
            {
                sum=sum+(x.second-x.first);
            }
            else if(x.second<x.first)
                sum=sum+x.second;

        }
        cout<<sum<<endl;

    }
}
