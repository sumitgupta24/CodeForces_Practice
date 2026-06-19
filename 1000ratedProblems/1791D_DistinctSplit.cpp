#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        vector<int> pref(n, 0), suff(n, 0);
        pref[0] = 1;
        suff[n - 1] = 1;
        set<char> st1, st2;
        st1.insert(str[0]);
        st2.insert(str[n - 1]);

        for(int i = 1; i < n; i++) {
            st1.insert(str[i]);
            pref[i] = (int)st1.size();
        }

        for(int i = n - 2; i >= 0; i--) {
            st2.insert(str[i]);
            suff[i] = (int)st2.size();
        }

        int maxVal = 0;

        for(int i = 0; i < n - 1; i++) maxVal = max(maxVal, pref[i] + suff[i + 1]);

        cout << maxVal << endl;
    }

    return 0;
}