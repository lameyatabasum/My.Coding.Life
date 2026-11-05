#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    char d=s[0][0];
    char o=s[0][1];
    if(d==o)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==n-i-1)
            {
                if(s[i][j]!=d)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            else
                {
                    if(s[i][j]!=o)
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }

        }
    }
    cout<<"YES"<<endl;
    return 0;
}
