#include<bits/stdc++.h>
using namespace std;

long long func(long long mid,vector<long long>& arr){
  int n = arr.size();
  long long val = 0;
  for(int i=0;i<n;i++){
    long long temp = arr[i] + 2*mid;
    if(temp > sqrt(LLONG_MAX)){
      return LLONG_MAX;
    }
    if(val > LLONG_MAX - temp * temp){
      return LLONG_MAX;
    }
    val += temp*temp;
  }
  return val;
}

int main(){
  long long t;
  cin >> t;
  while(t--){
    long long n,c;
    cin >> n >> c;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    long long low = 1;
    long long high = c;
    long long ans = -1;
    while(low <= high){
      long long mid = low + (high - low) / 2;
      long long val = func(mid,arr);
      if(val == c){
        ans = mid;
        break;
      }
      else if(val > c) high = mid - 1;
      else low = mid + 1;
    }
    cout << ans << endl;
  }
  return 0;
}