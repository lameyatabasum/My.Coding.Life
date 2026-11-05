#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,q;
    cin>>n>>q;
    vector<priority_queue<long long>> pq(n);
    while(q--)
    {
        long long type;
        cin>>type;
        if(type==0)
        {
            long long t,x;
            cin>>t>>x;
            pq[t].push(x);

        }
        else if(type==1)
        {
            long long t;
            cin>>t;
            if(!pq[t].empty())
            cout<<pq[t].top()<<endl;
        }
        else
        {
            long long t;
            cin>>t;
            if(!pq[t].empty())
            {
                pq[t].pop();
            }
        }
    }
}
