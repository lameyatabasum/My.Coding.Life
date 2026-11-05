#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>45)
            cout<<-1<<endl;
        else
        {
        vector<int>a;
        int n=9;
        while(n>0 && x>n)
        {
            a.push_back(n);
            x-=n;
            n--;
        }
        if(x>0)
            a.push_back(x);
        for(int i=a.size()-1 ; i>=0;i--)
        {
            cout<<a[i];
        }
        cout<<endl;
        }
    }
}
