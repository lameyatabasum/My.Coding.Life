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
        vector<string>a1(n);
        vector<string>a2(n);
        vector<string>a3(n);

        map<string,int>m;

        for(int i=0;i<n;i++)
        {
            cin>>a1[i];
            m[a1[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a2[i];
            m[a2[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>a3[i];
            m[a3[i]]++;
        }
        int s1=0,s2=0,s3=0;

        for(int i=0;i<n;i++)
        {
            if(m[a1[i]]==1)
                s1+=3;
            if(m[a1[i]]==2)
                s1+=1;
            if(m[a2[i]]==1)
                s2+=3;
            if(m[a2[i]]==2)
                s2+=1;
            if(m[a3[i]]==1)
                s3+=3;
            if(m[a3[i]]==2)
                s3+=1;
        }

        cout<<s1<<" "<<s2<<" "<<s3<<endl;
    }
}
