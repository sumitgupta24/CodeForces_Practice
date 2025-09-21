#include<bits/stdc++.h>
using namespace std;

vector<long long> longestSubarray(vector<long long>& arr){
    int n = arr.size();
    vector<long long> ans(2*n+1,0);
    long long count = 1;
    for(long long i=1;i<n;i++){
      if(arr[i]==arr[i-1]){
        count++;
      }
      else{
        ans[arr[i-1]] = max(ans[arr[i-1]],count);
        count = 1;
      }
    }
    ans[arr[n-1]] = max(ans[arr[n-1]],count);
    return ans;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      vector<long long> a(n),b(n);
      for(long long i=0;i<n;i++) cin >> a[i];
      for(long long i=0;i<n;i++) cin >> b[i];
      vector<long long> lsA = longestSubarray(a);
      vector<long long> lsB = longestSubarray(b);
      long long maxLen = 0;
      for(long long i=0;i<2*n+1;i++){
        maxLen = max(maxLen, lsA[i]+lsB[i]);
      }
      
      cout << maxLen << endl;
    }
    return 0;
}