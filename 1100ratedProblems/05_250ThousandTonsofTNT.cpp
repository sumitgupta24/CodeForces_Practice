#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      vector<long long> prefixSum(n,0);
      prefixSum[0] = arr[0];
      for(int i=1;i<n;i++) prefixSum[i] = prefixSum[i-1] + arr[i]; 
      long long ans = 0;
      for(int k=1;k<=n;k++){
        if(n%k) continue;
        int ind = k-1;
        long long maxi = prefixSum[ind];
        long long mini = prefixSum[ind];
        for(int i=ind+k;i<n;i+=k){
          long long curr = prefixSum[i] - prefixSum[i-k];
          maxi = max(maxi,curr);
          mini = min(mini,curr);
        }
        ans = max(ans,maxi - mini);
      }
      cout << ans << endl;
    }
    return 0;
}