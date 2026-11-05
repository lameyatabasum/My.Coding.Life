#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,t;
    cin>>p>>t;
    int j=0;
    for(int i=0;i<t.length();i++)
    {
        if(p[j]==t[i])
            j++;
    }
    cout<<j+1;
}
