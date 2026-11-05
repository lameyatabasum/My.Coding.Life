#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        int la=a.length();
        int lb=b.length();

        int s=min(la,lb);
        int m=max(la,lb);
        for(int i=0;i<s;i++)
        {
            cout<<a[i];
            cout<<b[i];
        }
        cout<<a.substr(s);
        cout<<b.substr(s);
        cout<<endl;
    }
}
