#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long k = (sqrt(1 + 8.0 * N) - 1) / 2;
    cout << k << endl;

    return 0;
}
