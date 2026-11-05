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
        vector<pair<int, int>>v;
        for(int i=1;i<=n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(x<=10)
            {
                v.push_back({i,y});
            }

        }
         sort(v.begin(), v.end(),
        [](auto &a, auto &b){
            return a.second > b.second;
        }
    );
    cout<<v[0].first<<endl;

    }
}
