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
        int tp=n/3;
        if(n%3==0)
        {
            cout<<tp<<" "<<tp+1<<" "<<tp-1<<endl;
        }
        else if(n%3==1)
        {
            cout<<tp<<" "<<tp+2<<" "<<tp-1<<endl;
        }
        else
            cout<<tp+1<<" "<<tp+2<<" "<<tp-1<<endl;
    }
}
