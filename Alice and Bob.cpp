#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(x<a[i])
                r++;
            else if(x>a[i])
                l++;
        }
        if(r>=l)
        {
            cout<<x+1<<endl;
        }
        else
            cout<<x-1<<endl;
    }
}
