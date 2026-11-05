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

        long long sum=0,c=0;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]>=k)
                 sum+=a[i];
                if(a[i]==0 && sum>0)
                {
                    sum--;
                    c++;
                }
            }
        cout<<c<<endl;

    }
}
