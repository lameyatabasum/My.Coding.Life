#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s,a;
        cin>>s>>a;
        int flag=0,c=0;
        int i;
        for(i=0;i<=5;i++)
        {
            if (s.find(a) != string::npos)
            {
                flag=1;
                break;
            }
            s+=s;
        }
        if(flag==1)
            cout<<i<<endl;
        else
            cout<<-1<<endl;
    }
}
