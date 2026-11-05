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
        vector<int>m;
        for(auto &x: freq)
        {
            m.push_back(x.second);
        }
        sort(m.begin(), m.end(), greater<>());
        int mx=m[m.size()-1];
        int sum=0;
        for(int i=0;i<m.size();i++)
        {
            //cout<<m[i]<<" ";
            if((m[i]*(i+1))>sum)
                sum=m[i]*(i+1);
        }
        if(mx>sum)
            sum=mx;
        cout<<sum<<endl;


    }
}
