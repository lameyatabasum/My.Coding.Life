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
        int sum=0,c=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum+=x;
            if(x<0)
                c++;

        }
       if(sum<0)
       {
        int o=(-sum+1)/2;
        if((c-o)%2!=0)
            o++;
        cout<<o<<endl;
       }
       else
       {
           if(c%2!=0)
            cout<<1<<endl;
           else
            cout<<0<<endl;
       }
    }
}
