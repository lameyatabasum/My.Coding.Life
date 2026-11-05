#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(4);

        for(int i=0;i<4;i++)
            cin>>a[i];
        int mx1=max(a[0],a[1]);
        int mx2=max(a[2],a[3]);

        int mx= max(mx1,mx2);
        int mn= min(mx1,mx2);
        //cout<<mx<<" "<<mn<<endl;
        sort(a.begin(),a.end(),greater<int>());
        if(mx==a[0]&&mn==a[1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
