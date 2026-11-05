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
        vector<int>v(n);
       int first = 0;
       int second = 0;
    for (int i = 0; i < n; i++)
    {
    cin >> v[i];
    if (v[i] > first) {
        second = first;
        first = v[i];
    }
    else if (v[i] > second && v[i] != first) {
        second = v[i];
    }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=first)
        cout<<v[i]-first<<" ";
        else if(first>second)
            cout<<first-second<<" ";
        else
            cout<<"0"<<" ";
    }
    cout<<endl;



    }
}
