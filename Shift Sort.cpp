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
        string a=s;
        sort(a.begin(),a.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=s[i])
                c++;
        }
        cout<<c/2<<endl;
    }
}
