#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        getline(cin, s1);
        getline(cin,s2);

        int l1=s1.length();
        int l2=s2.length();
        int i=0,j=0,flag=0;
        while(i<l1 &&j<l2)
        {
            if(s1[i]<'a'&&s1[i]>'z' || s1[i]<'A' && s1[i]>'Z')
            {
                i++;
            }
                s1[i]=tolower(s1[i]);
            if(s2[j]<'a'&&s2[j]>'z' || s2[j]<'A' && s2[j]>'Z')
            {
                j++;
            }
                s2[j]=tolower(s2[i]);
            if(s1[i]==s2[j])
                flag=1;

        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
