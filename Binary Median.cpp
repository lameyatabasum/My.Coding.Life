#include<bits/stdc++.h>
using namespace std;

// Convert binary string to long long
long long toLL(const string &s) {
    long long val = 0;
    for (char c : s) {
        val = (val << 1) + (c - '0');
    }
    return val;
}

// Convert long long back to binary string of length m
string toBin(long long x, int k) {
    string s(k, '0');
    for (int i = k - 1; i >= 0; i--) {
        if (x & 1LL) s[i] = '1';
        x >>= 1LL;
    }
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long f=pow(2,k)-1;
        long long m=f/2;
        while(n--)
        {
            string s;
            cin>>s;
            int sum=0;
            long long temp=toLL(s);
            if(temp<m)
            {
                m++;
                sum++;
            }
            else if(temp==m)
            {
                if(sum%2!=0)
                {
                    m--,sum--;
                }
                else
                    m++,sum++;
            }
            else
                m--,sum--;
        }
        cout<<m<<endl;n
        if(m<0)
          cout<<toBin(0,k)<<endl<<endl;
        else if(m>f)
            cout<<toBin(f,k);

        else
            cout<<toBin(m,k)<<endl<<endl;
    }
}
