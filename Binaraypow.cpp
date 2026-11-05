#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;
cpp_int binpow(cpp_int base, int exp) {
    cpp_int res = 1;
    while (exp > 0) {
        if (exp & 1) res *= base;
        base *= base;
        exp >>= 1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    cpp_A=binpow(cpp_int(a),b);
    cpp_B=binpow(cpp_int(b),a);
    cout<<A-B;


}
