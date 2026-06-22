#include <bits/stdc++.h>
using namespace std;

int cost(vector<int> &a, int x) {
    int n = a.size();

    int l = 0;
    while (l < n && a[l] == x) l++;

    int r = n - 1;
    while (r >= 0 && a[r] == x) r--;

    if (l > r) return 0;

    return r - l + 1;
}

int solve(vector<int> &a) {
    int n = a.size();

    bool allSame = true;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) {
            allSame = false;
            break;
        }
    }
    if (allSame) return 0;

    return min(cost(a, a[0]), cost(a, a[n - 1]));
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << solve(a) << endl;
    }

    return 0;
}