#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    map<char,int>freq;
    cin>>n>>a;
    for(char c:a)
    {
        freq[c]++;
    }
    bool f=true;
    int same=-1;
    for(auto x:freq)
    {
       if(x.second%n!=0)
          f=false;

    }

    if(f)
    {
       string p="";
       for(auto x:freq)
       {
           p+=string(x.second/n,x.first);
       }
       for(int i=0;i<n;i++)
        cout<<p;
    }
     else
        cout<<-1<<endl;
}
