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
        int fe=0,fo=0; //all even all odd
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
                fe=1;  //not all even
            else
               fo=1; //not all odd

            sum+=a[i];

        }
        if(sum%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(fe==0&&fo!=0)
            {
                cout<<"NO"<<endl;
            }
            else if(fo!=0 && fe!=0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
    }
}
