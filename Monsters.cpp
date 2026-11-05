#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        //vector<long long>a(n);
        vector<pair<long long, long long>>b;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%k==0)
               b.push_back({k,i+1});
            else
            b.push_back({a%k,i+1});
        }
         stable_sort(b.begin(), b.end(), [](auto &x, auto &y){
            return x.first > y.first;
        });
        for(auto x : b)
        {
            cout<<x.second<<" ";
        }
        cout<<endl;

    }
}
