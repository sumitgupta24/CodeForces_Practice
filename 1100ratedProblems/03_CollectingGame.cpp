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
      vector<long long> temp = arr;
      sort(arr.begin(),arr.end());
      vector<long long> prefixSum(n,0);
      prefixSum[0] = arr[0];
      for(int i=1;i<n;i++) prefixSum[i] = prefixSum[i-1] + arr[i];
      unordered_map<long long,long long> mpp;
      for(int i=0;i<n;i++){
        auto it = lower_bound(arr.begin(),arr.end(),prefixSum[i]);
        int ind = it - arr.begin();
        if(prefixSum[i] == arr[ind]) ind += 1;
        mpp[arr[i]] = ind - 1;
      }
      for(int i=0;i<n;i++){
        if(mpp[temp[i]] == -1) cout << 0 << " ";
        else cout << mpp[temp[i]] << " ";
      }
      cout << endl;
    }
    return 0;
}