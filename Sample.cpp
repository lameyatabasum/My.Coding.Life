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
using u128 = unsigned __int128;
using u64 = uint64_t;


u64 mulmod(u64 a, u64 b, u64 mod) {
    return (u128)a * b % mod;
}


u64 modexp(u64 base, u64 exp, u64 mod) {
    u64 result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return result;
}

// Miller–Rabin test for 64-bit numbers
bool isPrime(u64 n) {
    if (n < 2) return false;
    for (u64 p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
        if (n % p == 0) return n == p;

    u64 d = n - 1, s = 0;
    while ((d & 1) == 0) {
        d >>= 1;
        s++;
    }

    // Deterministic bases for 64-bit integers
    for (u64 a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
        if (a % n == 0) continue;
        u64 x = modexp(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool composite = true;
        for (u64 r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}
int main()
{
    fast
    ll t;
    cin>>t;
    ll x;
    cin>>x;
    if(isPrime(x)&&x%2==0)
        {
            cout<<"KU_NULL you are the best !"<<endl;
        }
    else if(isPrime(x)&&x%2!=0)
        {
            cout<<"KU_LebuCha you are the best !"<<endl;
        }
    else
        cout<<"Keep Solving"<<endl;
    ll g=0;
    ll l=x;
    t=t-1;
    for(ll i=1;i<=t;i++)
    {
        ll y;
        cin>>y;
        l=max(l,y);
        ll gc=__gcd(x,y);
        g=max(gc,g);
        x=y;
        if(isPrime(y)&&y%2==0)
        {
            cout<<"KU_NULL you are the best !"<<endl;
        }
        else if(isPrime(y)&&y%2!=0)
        {
            cout<<"KU_LebuCha you are the best !"<<endl;
        }
        else
            cout<<"Keep Solving"<<endl;

    }
    if(g>=25 && isPrime(l))
        cout<<"Welcome to ICPC Dhaka Regional 2026, Best of luck KU_NULL & KU_LebuCha"<<endl;
}
