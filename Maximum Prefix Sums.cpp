#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<ll> val(n), pref(n);

        for (ll &it : val)
            cin >> it;
        for (ll &it : pref)
            cin >> it;

        bool ok = true;

        for (int i = 1; i < n; i++) {
            if (pref[i] < pref[i - 1]) {
                ok = false;
            }
        }

        if (!ok) {
            cout << "No" <<endl;
            continue;
        }

        vector<ll> lim(n);

        lim[n - 1] = pref[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (str[i + 1] == '1')
            {
                lim[i] = min(pref[i], lim[i + 1] - val[i + 1]);
            }
            else
            {
                lim[i] = pref[i];
            }
        }

        vector<ll> ans(n);

        ll sum = 0;

        for (int i = 0; i < n; i++) {

            if (str[i] == '1') {
                sum += val[i];
                ans[i] = sum;

                if (sum > pref[i] || sum > lim[i])
                {
                    ok = false;
                }

            }
            else
            {

                ans[i] = min(pref[i], lim[i]);
                sum = ans[i];
            }
        }

        if (!ok)
        {
            cout << "No" <<endl;
            continue;
        }

        ll mx = ans[0];

        if (mx != pref[0]) {
            cout << "No" <<endl;
            continue;
        }

        for (int i = 1; i < n; i++) {
            mx = max(mx, ans[i]);

            if (mx != pref[i]) {
                ok = false;
            }
        }

        if (!ok) {
            cout << "No" << endl;
            continue;
        }

        cout << "Yes" << endl;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
              cout << ans[i];
            else
              cout << ans[i] - ans[i - 1];

            if (i + 1 != n)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
