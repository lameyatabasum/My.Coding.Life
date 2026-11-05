#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++)cin>>b[i];
    sort(b.begin(),b.end());
    cin>>m;
    vector<int>g(m);

    for(int i=0;i<m;i++)cin>>g[i];
    sort(g.begin(),g.end());
    int boy=0,girl=0;
    int c=0;
    while(boy<n && girl<m)
    {
        if(abs(b[boy]-g[girl])<=1)
            boy++,girl++,c++;
        else if(b[boy]<g[girl])
            boy++;
        else
            girl++;
    }
    cout<<c;
}
