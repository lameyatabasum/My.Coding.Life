#include<bits/stdc++.h>
using namespace std;
//acmicpc
string comparison(string s)
{
    int idex=-1,l=s.length();
    for(int i=0;i<l-1;i++)
    {
        if(s[i]>s[i+1])
        {
            idex=i;
            break;
        }
    }
    if(idex==-1)
        return s;

    sort(s.begin()+idex,s.end());
    return s;
}
int main()
{
    string s;
    cin>>s;
    s=comparison(s);
    int m=-1;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>s[i+1])
            {
                m=i;
                break;
            }
    }
    if(m==-1)
    cout<<s;
    else
        string(s.begin(), s.begin()+m);

}
