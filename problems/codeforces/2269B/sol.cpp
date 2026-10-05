#include <bits/stdc++.h>
using namespace std;

int digitSquareSum(int x) {
    int sum = 0;
    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}

int next_n_day_value(int x, int n) {
    for (int i = 0; i < n; i++) {
        x = digitSquareSum(x);
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int settled = next_n_day_value(x, 100);
            freq[settled]++;
        }
        long long count = 0;
        for (auto &[val, cnt] : freq) {
            count += (long long)cnt * (cnt - 1) / 2;
        }
        cout << count << "\n";
    }
    return 0; 
}