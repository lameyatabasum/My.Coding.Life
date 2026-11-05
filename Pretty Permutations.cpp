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
        vector<int>a;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
                a.push_back(i);
            for(int i=0;i<n-1;i+=2)
                swap(a[i],a[i+1]);
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
        for(int i=1;i<=n;i++)
            a.push_back(i);
        for(int i=0;i<a.size()-1;i+=2)
        {
            swap(a[i],a[i+1]);
        }
        swap(a[n-2],a[n-1]);
        for(int i=0;i<a.size();i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    }

}
