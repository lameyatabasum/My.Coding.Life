#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int idx=s.length();
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!='0')
            {
                idx=i;
                break;
            }
        }
        int c=0;
        for(int i=0;i<idx;i++)
        {
            if(s[i]!='0')
                c++;
        }

        cout<<c+s.length()-1-idx<<endl;


    }
}
