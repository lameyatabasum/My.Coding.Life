#include<bits/stdc++.h>
using namespace std;
void pyramid(int n,int x,int f)
{
     if(n==0)
        return;

         pyramid(n-1,x,f-2);
         for(int i=0;i<x-n;i++)
            cout<<" ";
         for(int i=0;i<f;i++)
            cout<<"*";
         cout<<endl;


}
int main()
{
    int n;
    cin>>n;
    int f=1+(n-1)*2;
    pyramid(n,n,f);

}
