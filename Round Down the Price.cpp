#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string m;
        cin>>m;
        int temp=m[0]-'0'-1;
        m[0]=temp+'0';
        int p=-1;
        for(int i=0;i<m.length();i++)
            {
                if(m[i]!='0')
                {
                 p=i;
                 break;
                }
            }
        if(p==-1)
            cout<<0<<endl;
        else
           cout<<m.substr(p)<<endl;

    }
}
