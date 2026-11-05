#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        long long sum = 0, mx = 0;

        for (auto &x : b) {
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }

        long long L = (sum + n - 1) / n; // ceil(sum / n)
        cout << max(mx, L) << "\n";
    }
}

