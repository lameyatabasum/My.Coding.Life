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
        vector<long long>a(n);
        int c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==2)
                c++;
        }
        if(c%2!=0)
            cout<<-1<<endl;
        else
        {
            int h=c/2;
            int temp=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==2)
                    temp++;
                if(temp==h)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
}
