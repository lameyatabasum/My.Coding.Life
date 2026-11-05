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
       vector<long long>a(n);
       map<long  long ,int>freq;
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
        freq[a[i]]++;
       }
       int flag=0;
       for(auto l:freq)
       {
           if(l.second>1)
           {
               flag=1;
               cout<<"NO"<<endl;
               break;
           }

       }
       if(flag==0)
        cout<<"YES"<<endl;


   }
}
