#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,flag=0;
    int r=s.length()-1;
    int ln=r+1;

    while(l<r)
    {
        if(s[l]!='a'&& s[l]!='e' && s[l]!='i'&& s[l]!='u'&&s[l]!='o'&&s[l]!='n')
        {
            if(s[l+1]=='a'|| s[l+1]=='e' || s[l+1]=='i' || s[l+1]=='o' || s[l+1]=='u')
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        l++;
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
    {

            if(s[r]!='a'&& s[r]!='e' && s[r]!='i'&& s[r]!='u'&&s[r]!='o'&&s[r]!='n')
            {
              cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
    }

}
