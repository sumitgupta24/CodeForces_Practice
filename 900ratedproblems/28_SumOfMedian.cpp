#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,k;
      cin >> n >> k;
      vector<long long> arr(n*k);
      for(int i=0;i<n*k;i++) cin >> arr[i];
      long long ind = n*k;
      long long maxSum = 0;
      while(k--){
        ind = ind - ((n/2) + 1);
        maxSum += arr[ind];
      }
      cout << maxSum << endl;
    }
    return 0;
}