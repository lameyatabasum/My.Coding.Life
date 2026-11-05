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

        ll n;
        cin>>n;
        vi a(n);
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll o1=0,o2=0,e1=0,e2=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]<0)
                    o1++;
            }
            else
            {
                if(a[i]>0)
                    e1++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(a[i]>0)
                    o2++;
            }
            else
            {
                if(a[i]<0)
                    e2++;
            }
        }
        //cout<<o1<<" "<<e1<<" "<<o2<<" "<<e2<<endl;
        cout<<min(o1+e1,o2+e2)<<endl;

}

