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
      long long maxSum = LLONG_MIN;
      long long sum = arr[0];
      maxSum = max(maxSum,sum);
      for(int i=1;i<n;i++){
        if(sum < 0) sum = 0;
        if((abs(arr[i])%2==0 && abs(arr[i-1])%2==0) || (abs(arr[i])%2==1 && abs(arr[i-1])%2==1)) sum = 0;
        sum += arr[i];
        maxSum = max(maxSum,sum);
      }
      cout << maxSum << endl;
    }
    return 0;
}