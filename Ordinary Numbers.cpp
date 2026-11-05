#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int c=s.length()-1;
    int sum=c*9;
    int flag=0;
    int temp=s[0]-'0';
    for(int i=0;i<s.length();i++)
    {
        if(s[0]<s[i])
            break;
        else if(s[0]>s[i])
        {
            temp-=1;
            break;
        }
    }
    sum+=temp;
    cout<<sum<<endl;
    }
}
