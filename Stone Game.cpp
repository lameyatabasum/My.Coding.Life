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
        {
            cin>>a[i];
        }

        int mx=0,mn=a[0],mxi=0,mni=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
                mxi=i;
            }
            if(a[i]<mn)
            {
                mn=a[i];
                mni=i;
            }
        }
        int maxi=max(mxi,mni);
        int mini=min(mxi,mni);
        //cout<<mini<<" "<<maxi<<endl;
        //For minindex
        int f1=mini+1;
        int b1=min((maxi-f1+1),(n-maxi+1));
        int ans1=f1+b1;

        //For maxindex
        int b2=n-maxi;
        int f2=min((n-b2-mini),mini+1);
        int ans2=b2+f2;

        cout<<min(ans1,ans2)<<endl;
    }
}
