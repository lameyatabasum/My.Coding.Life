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
        string s;
        cin>>s;

        int i=0;

        while(i*2 < s.length())
        {
            if(s[i]==s[i+1] )
            {
                s.erase(i,1);
                s.erase(i,1);

                if(i>0)
                    i--;
            }
            else
                i++;
        }

        if(s.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
