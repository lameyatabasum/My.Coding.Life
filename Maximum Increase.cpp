#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long >a(n);
    cin>>a[0];

    int l=1;
    int ans=1;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i-1]<a[i])
            l++;
        else
        {
            ans=max(ans,l);
            l=1;
        }
    }
    if(l>1)
        ans=max(ans,l);
    cout<<ans;
}
