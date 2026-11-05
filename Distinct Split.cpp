#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        set<char>a;
        vector<long long>pf(n),sf(n);
        long long idx=0;
        for(long long i=0;i<n;i++)
        {
            a.insert(s[i]);
            pf[i]=a.size();

        }
        a.clear();
        for(long long i=n-1;i>=0;i--)
        {
            a.insert(s[i]);
            sf[i]=a.size();

        }
        long long mx=0;
        for(int i=0;i<n-1;i++)
        {
            mx=max(mx, pf[i]+sf[i+1]);
        }
        cout<<mx<<endl;
    }
}
