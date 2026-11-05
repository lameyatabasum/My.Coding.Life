#include<bits/stdc++.h>
using namespace std;

using u128 = unsigned __int128;
using u64 = uint64_t;

// Modular multiplication (to avoid overflow)
u64 mulmod(u64 a, u64 b, u64 mod) {
    return (u128)a * b % mod;
}

// Modular exponentiation
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
    int n;
    cin>>n;
    int ans=0;
   for(int j=1;j<=n;j++)
   {
    int c=0;
    for(int i=2;i*i<=j;i++)
    {
        if(j%i==0)
        {
            if(isPrime(i))
                c++;
            if(j/i!=i)
            {
            if(isPrime(j/i))
                c++;
            }
        }


    }
    if(c==2)
        {
            ans++;

        }
   }
   cout<<ans;
}

