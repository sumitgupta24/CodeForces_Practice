#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int n = str.size();
        stack<int> upper, lower;
        vector<bool> removed(n, false);

        for(int i = 0; i < n; i++) {
            if(str[i] == 'B') {
                removed[i] = true;
                if(!upper.empty()) {
                    removed[upper.top()] = true;
                    upper.pop();
                }
            } 
            else if(str[i] == 'b') {
                removed[i] = true;
                if(!lower.empty()) {
                    removed[lower.top()] = true;
                    lower.pop();
                }
            }
            else {
                if(islower(str[i])) lower.push(i);
                else if(isupper(str[i])) upper.push(i);
            }
        }

        for(int i = 0; i < n; i++) {
            if(!removed[i]) cout << str[i];
        }

        cout << endl;
    }

    return 0;
}