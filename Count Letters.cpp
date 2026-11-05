#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>f;

    for(int i=0;i<s.length();i++)
    {
        f[s[i]]++;
    }
    for(auto x : f)
    {
        cout<<x.first<<" "<<':'<<" "<<x.second<<endl;
    }
}
