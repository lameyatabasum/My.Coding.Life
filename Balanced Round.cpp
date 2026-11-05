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
        vector<int>a(n);
        int ans=1,l=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        for(int i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])<=k)
                l++;
            else
            {
                ans=max(ans,l);
                l=1;
            }
        }
        if(l>1)
            ans=max(ans,l);
        cout<<n-ans<<endl;;
    }
}
