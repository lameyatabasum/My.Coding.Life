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
        vector<int>f;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }
            if(m.size()==1)
                cout<<"YES"<<endl;
            else if(m.size()==2)
            {
                if(n/2==f[0] || n/2==f[1])
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;

    }
}
