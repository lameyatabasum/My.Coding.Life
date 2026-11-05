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
        map<int, int> freq;
        int sum=0;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        int flag=0;
        for(auto x: freq)
        {
            if(x.second>1)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"NO"<<endl;

    }
}
