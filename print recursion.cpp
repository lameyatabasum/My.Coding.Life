#include<bits/stdc++.h>
using namespace std;
int PrintRecursion(int n)
{
    if(n==0)
        return 1;
    else
        cout<<"I love Recursion"<<endl;
    return PrintRecursion(n-1);

}
int main()
{
    int n;
    cin>>n;
    PrintRecursion(n);
}
