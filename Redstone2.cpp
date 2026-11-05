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
        set<int>f;
        int flag=0;
        for(auto x : a)
        {
            if(f.count(x))
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
            f.insert(x);
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
}
