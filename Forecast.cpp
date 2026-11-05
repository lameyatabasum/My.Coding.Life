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
    double a,b,c;
    cin>>a>>b>>c;
    double f1=(-b+sqrt(b*b-4*a*c))/(2*a);

    double f2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(f2>=f1)
      {
          cout<<fixed<<setprecision(10)<<f2<<endl;
          cout<<fixed<<setprecision(10)<<f1<<endl;
      }
    else
    {
        cout<<fixed<<setprecision(10)<<f1<<endl;
        cout<<fixed<<setprecision(10)<<f2<<endl;
    }

}
