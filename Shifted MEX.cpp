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
        vector<long long>a;
        for(int i=0;i<n;i++)
            {
                long long x;
                cin>>x;
                  a.push_back(x);
            }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        long long mex=0,c=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i-1]+1<a[i])
            {
               c=0;
            }
            c++;
            mex=max(c,mex);
        }


          cout<<mex<<endl;
    }
}
