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
        vector<int>a;
        int i=1,j=n;
        while(i<j)
        {
            a.push_back(i);
            a.push_back(j);
            i++;
            j--;
        }
        if(n%2!=0)
            a.push_back((n+1)/2);
        for(int i=n-1;i>=0;i--)
            cout<<a[i]<<" ";
        cout<<endl;
    }

}
