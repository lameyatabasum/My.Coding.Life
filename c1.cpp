
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    fast
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int total=a*n;
    int total1=(n/m)*b+(n%m)*a;
    int total2=((n+m-1)/m)*b;
    if(n>=m)
    {
        if(total<total1&&total<total2)
          cout<<total<<endl;
        else if(total1<total&&total1<total2)
            cout<<total1<<endl;
        else
            cout<<total2<<endl;
    }
    else if(m>n)
    {
        if(b<total)
          cout<<b<<endl;
        else
            cout<<total<<endl;n
    }
}
