#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        if ((x == 0 && y == 0) || (y == 0 && z == 0) || (z == 0 && x == 0)) {
        } else {
            count += 1;
        }
    }
    cout << count;

    return 0;
}
