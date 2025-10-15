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
      long long negCount = 0;
      long long totalSum = 0;
      for(int i=0;i<n;i++){
        if(arr[i]< 0){
          negCount += 1;
          arr[i] = -arr[i];
        }
        totalSum += arr[i];
      }
      long long maxSum = totalSum;
      sort(arr.begin(),arr.end());
      if(negCount % 2 == 1){
        maxSum = totalSum - 2 * arr[0];
      }
      cout << maxSum << endl;
    }
    return 0;
}