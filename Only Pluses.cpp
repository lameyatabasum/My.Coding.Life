#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(3);
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int temp=a[1]-a[0];
        int mx=0;
        for(int i=0;i<=5;i++)
        {
            int x=a[0]+i;
            for(int j=0;j<=(5-i);j++)
            {
                int y=a[1]+j;
                int z=a[2]+(5-i-j);
                mx=max(mx,x*y*z);

            }

        }
        cout<<mx<<endl;

    }
}
