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
        int l1=1e9,l2=1e9;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(l1>l2)
                swap(l1,l2);
            if(a[i]<=l1)
                l1=a[i];
            else if(a[i]<=l2)
                l2=a[i];
            else
            {
                l1=a[i];
                sum++;
            }

        }
        cout<<sum<<endl;
    }
}
