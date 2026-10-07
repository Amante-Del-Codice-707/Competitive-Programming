#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using pi = pair<int, int>;
using mp = map<int, int>;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vi v;
        while(n--) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        ll score = 0;
        while((int)v.size() >= k) {
            if (v[k - 1] > v[(int)v.size() - k]) {
                score += v[k - 1];
                v.erase(v.begin() + k - 1);
            } else {
                score += v[(int)v.size() - k];
                v.erase(v.begin() + v.size() - k);
            }
        }
        cout << score << "\n";
    }
 
    return 0;
}
