#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={9,4,0,20,3,10,5};
    int k=33;
    int n=a.size();
    int c=0;
    int sum=0;
    int l=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

        while(sum>=k)
        {
            if(sum==k)
                c++;

            sum-=a[l];
            l++;
        }
    }
    cout<<c;
}
