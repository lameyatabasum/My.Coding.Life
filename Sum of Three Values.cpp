#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
int main()
{
    int n,t;
    cin>>n>>t;
    vector<pair<ll,int>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    vector<int>ans;
    sort(a.begin(),a.end());
    int flag=0;
    for(int i=0;i<n-2;i++)
    {
        int j=i+1,k=n-1;

        while(j<k)
        {
            long long sum=a[i].first+a[j].first+a[k].first;
            if(sum<t)
                j++;
            else if(sum>t)
                k--;
            else
            {
                //cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second<<endl;
                ans.push_back(a[i].second);
                ans.push_back(a[j].second);
                ans.push_back(a[k].second);
                sort(ans.begin(),ans.end());
                for(auto x : ans)
                    cout<<x<<" ";
                cout<<endl;
                flag=1;
                return 0;
            }
        }
    }
    if(flag==0)
        cout<<"IMPOSSIBLE"<<endl;
}
