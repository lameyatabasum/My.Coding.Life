#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    for(int i=1;i<=500;i++)
    {
        s+=to_string(i);
    }
        int n;
        cin>>n;
        cout<<s[n-1]<<endl;

}
