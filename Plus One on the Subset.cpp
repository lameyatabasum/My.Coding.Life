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
        cin>>a[0];
        int h=a[0];
        int s=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>h)
                h=a[i];
            if(a[i]<s)
                s=a[i];
        }
        cout<<h-s<<endl;

    }
}
