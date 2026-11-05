#include<bits/stdc++.h>
using namespace std;
string decToBin(long long n) {
    string s = "";
    while (n > 0) {
        s += char('0' + (n & 1));   // bit extract
        n >>= 1;                    // right shift
    }
    reverse(s.begin(), s.end());
    if (s == "") s = "0";
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        vector<int>a;

        string s = decToBin(n);
        //cout<<s<<endl;
        long long sum=0;
        int j=0;
            for(long long i=s.length()-1; i>=0; i-- )
            {
                if(s[i]=='1')
                {
                    sum++;
                    if(s[i-1]=='0')
                    {
                      s[i-1]='1';
                      a.push_back(sum);
                      j++;
                      sum=0;

                    }

                }
            }
        if(sum>0)
        {
            a.push_back(sum);
            j++;
        }
        if(a.size()<k)
        {
            int  ans=0;
            for(int i=0;i<a.size();i++)
              ans+=a[i];
            cout<<k-a.size()+ans<<endl;
        }
        else
        {
        int temp=a[0];
        sort(a.begin(), a.end(), greater<int>());

        int ans=0;
        int flag=0;

        for(int i=0;i<k;i++)
        {
            if(temp==a[i])
               flag=1;
            ans+=a[i];
        }
        if(flag==1)
        cout<<ans<<endl;
        else
            cout<<ans-1<<endl;
        }

    }
}
