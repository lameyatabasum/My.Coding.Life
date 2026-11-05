#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;

    vector<int>a(12);

    for(int i=0;i<12;i++)
    {
        cin>>a[i];

    }
    if(k==0)
    {
        cout<<0;
        return 0;
    }

    sort(a.rbegin(),a.rend());

    int sum=0;
    for(int i=0;i<12;i++)
    {
        sum+=a[i];
        if(sum>=k)
        {
            cout<<i+1;
            return 0;
        }

    }
    if(sum>=k)
        cout<<"YES"<<endl;
    else
        cout<<-1<<endl;

}
