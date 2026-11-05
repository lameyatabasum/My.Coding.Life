#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,n;
        cin>>x>>y>>k>>n;
        int d=max(0, x-y);
        if(d==0)
            cout<<"LuckyChef"<<endl;
        else
        {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int c,p;
            cin>>c>>p;
            if(c>=d && p<=k)
                flag=1;
        }
        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
            cout<<"UnluckyChef"<<endl;
        }
    }
}
