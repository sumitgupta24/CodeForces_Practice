#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    vector<long long> prefixSum(n + 1, 0);
    for (int i = 0; i < n; i++) prefixSum[i + 1] = prefixSum[i] + arr[i];
    long long maxSum = 0;
    for (int i=0;i<=k;i++) {
      int left = 2 * i; 
      int right = (k - i);       
      if (left <= n && right <= n - left) {
        long long sum = prefixSum[n - right] - prefixSum[left];
        maxSum = max(maxSum, sum);
      }
    }
    cout << maxSum << endl;
  }
  return 0;
}
