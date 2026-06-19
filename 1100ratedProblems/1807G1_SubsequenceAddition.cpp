#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());
        

        string ans = "Yes";
        if(arr[0] != 1) ans = "No";

        int sum = arr[0];
        for(int i = 1; i < n; i++) {
            if(sum < arr[i]) {
                ans = "No";
                break;
            }
            sum += arr[i];
        }

        cout << ans << endl;

    }

    return 0;
}