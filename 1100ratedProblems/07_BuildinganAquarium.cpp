#include<bits/stdc++.h>
using namespace std;

long long trap(long long mid,vector<long long>& height){
  long long n = height.size();
  long long totalWater = 0;
  for(int i=0;i<n;i++){
    if(mid > height[i]) totalWater += (mid - height[i]);
  }
  return totalWater;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n,x;
      cin >> n >> x;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      long long low = 1;
      long long high = 1e12;
      long long ans = -1;
      while(low <= high){
        long long mid = low + (high - low) / 2;
        if(trap(mid,arr) <= x){
          ans = mid;
          low = mid + 1;
        } 
        else high = mid - 1;
      }
      cout << ans << endl;
    }
    return 0;
}