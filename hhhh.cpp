#include<bits/stdc++.h>
using namespace std;

long long kadane(const vector<long long>& arr){
    long long best = LLONG_MIN, cur = 0;
    for(long long x : arr){
        cur = max(x, cur + x);
        best = max(best, cur);
    }
    return best;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        // if k even, no effect
        if(k % 2 == 0){
            cout << kadane(a) << "\n";
            continue;
        }

        // k is odd → Alice has one extra move
        // She will apply +b[i] at index that maximizes subarray sum
        long long ans = LLONG_MIN;

        for(int i=0;i<n;i++){
            vector<long long> temp = a;
            temp[i] += b[i];
            ans = max(ans, kadane(temp));
        }

        cout << ans << "\n";
    }
}
