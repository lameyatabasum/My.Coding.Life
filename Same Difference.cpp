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
    string a;
    cin>>a;
    map<char,int>f;
    for(char c: a)
    {
        f[c]++;
    }
    char last=a.back();
    int c=f[last];
    cout<<n-c<<endl;;
    }

}
