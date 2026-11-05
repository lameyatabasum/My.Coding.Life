#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        string x;
        cin>>x;
        if(s[0]==x[0] || s[1]==x[1])
            flag=1;
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
