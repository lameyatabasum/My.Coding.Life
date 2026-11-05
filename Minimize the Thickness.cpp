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
        //vector<int>b(n);
        long long total_sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total_sum+=a[i];
        }
        int ans=a.size();
        long long psum=0;
        for(int i=0;i<n;i++)
        {
            psum+=a[i];
            int mxlen=0;
            long long csum=0;
            int l=0;
            for(int j=0;j<n;j++)
            {
                csum+=a[j];
                l++;

                if(psum==csum)
                {
                    mxlen=max(mxlen,l);
                    l=0;
                    csum=0;
                }
                else if(csum>psum)
                {
                    break;
                }

            }
            if(csum==0&&l==0)
              ans=min(ans,mxlen);
        }

        cout<<ans<<endl;
    }
}
