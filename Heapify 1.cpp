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
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
            int idx=i;

            while(idx<=n)
            {
                //cout<<idx<<endl;
                if(a[idx]%i!=0)
                {
                    flag=1;
                    break;
                }
                idx*=2;
                //cout<<idx<<endl;
            }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
