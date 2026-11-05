#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> ans;
    ans.push_back(1);
    long long l = 1;

    for(long long i = 2; i <= n; i++)
    {
        long long c = 0;
        for(long long j = 0; j < l; j++)
        {
            long long temp = ans[j] * i + c;
            ans[j] = temp % 10;
            c = temp / 10;
        }
        while(c)
        {
            ans.push_back(c % 10); // fixed
            c /= 10;
            l++;
        }
    }

    for(long long i = l-1; i >= 0; i--)
        cout << ans[i];
    cout << endl;
}
