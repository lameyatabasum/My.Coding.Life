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
        map<int,int>f;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            f[x]++;
        }
            if(f.size()==1)
                cout<<"YES"<<endl;
            else if(f.size()==2)
            {
                auto it=f.begin();
                int f1=it->second;
                it++;
                int f2=it->second;
                if(n/2==f1 || n/2==f2)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;

    }
}
