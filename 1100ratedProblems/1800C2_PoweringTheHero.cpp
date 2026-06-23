#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        long long totalPower = 0;
        priority_queue<long long> maxHeap;

        for(int i = 0; i < n; i++) {
            if(arr[i] > 0) maxHeap.push(arr[i]);
            else if(arr[i] == 0) {
                if(!maxHeap.empty()) {
                    totalPower += maxHeap.top();
                    maxHeap.pop();
                }
            } 
        }

        cout << totalPower << endl;
    }

    return 0;
}