#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int64> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int64 mn = 0, mx = 0; // possible range after 0 turns
        for (int i = 0; i < n; ++i) {
            int64 cand1_max = mx - a[i];     // choose red from best previous
            int64 cand2_max = b[i] - mn;     // choose blue from worst previous
            int64 new_mx = max(cand1_max, cand2_max);

            int64 cand1_min = mn - a[i];     // red from worst previous
            int64 cand2_min = b[i] - mx;     // blue from best previous
            int64 new_mn = min(cand1_min, cand2_min);

            mn = new_mn;
            mx = new_mx;
        }

        cout << mx << '\n';
    }
    return 0;
}

