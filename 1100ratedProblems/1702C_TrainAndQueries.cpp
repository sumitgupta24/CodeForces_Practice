#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        map<int, pair<int, int>> mpp;

        for(int i = 0; i < n; i++) {
            if(!mpp.count(arr[i])) mpp[arr[i]] = {i, i};
            else mpp[arr[i]].second = i;
        }

        for(int i = 0; i < k; i++) {
            int a, b;
            cin >> a >> b;
            if(!mpp.count(a) || !mpp.count(b) || mpp[b].second < mpp[a].first) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }

    return 0;
}