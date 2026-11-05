#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int sum=min(abs('a'-s[0]),26-abs('a'-s[0]));
    for(int i=0;i<l-1;i++)
    {
        int f=abs(s[i]-s[i+1]);
        int m=26-f;
        //cout<<min(f,m);
        sum+=min(f,m);


    }
    cout<<sum;
}
