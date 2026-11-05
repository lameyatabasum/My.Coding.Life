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
        int mx=0,im=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=mx)
            {
                mx=a[i];
                im=i;
            }
        }
        if(a[0]==mx)
        {
            int idx=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]!=a[i+1]+1)
                {
                    idx=i+1;
                    break;
                }
            }
            int mxx=0,maxi=0;
            for(int i=idx;i<n;i++)
            {
                if(mxx<=a[i])
                    {
                        mxx=a[i];
                        maxi=i;
                    }
            }
            reverse(a.begin()+idx,a.begin()+maxi+1);
        }
        else
           reverse(a.begin(),a.begin()+im+1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}
