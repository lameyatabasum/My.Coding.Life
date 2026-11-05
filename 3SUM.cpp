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
        map<long long,long long>m;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            m[x%10]++;
        }
        vector<long long>a;
        for(auto x : m)
        {
            for(int j=0;j<min(x.second,3LL);j++)
                a.push_back(x.first);
        }
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                for(int k=j+1;k<a.size();k++)
                {
                    if((a[i]+a[j]+a[k])%10==3)
                    {
                        cout<<"YES"<<endl;
                        flag=1;
                        break;

                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            cout<<"NO"<<endl;

    }
}
