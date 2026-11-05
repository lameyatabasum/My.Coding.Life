#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        vector<string>a(n);

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i+=m)
        {
            for(int j=0;j<n;j+=m)
            {
                cout<<a[i][j];
            }
            cout << endl;
        }
    }
}
