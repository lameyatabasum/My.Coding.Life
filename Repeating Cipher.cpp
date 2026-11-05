#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        idx+=i;
        if(idx<n)
        cout<<s[idx];
        else
            break;
    }


    cout<<endl;
}
