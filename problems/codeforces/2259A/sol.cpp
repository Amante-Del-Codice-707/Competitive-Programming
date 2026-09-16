#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        for (int block = 0; block < n / k; block++) {
            bool all_ones = true;
            for (int j = block * k; j < block * k + k; j++) {
                if (s[j] == '0') {
                    all_ones = false;
                }
            }
            if (all_ones) {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}