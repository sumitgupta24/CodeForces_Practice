#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,x;
      cin >> n >> x;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      long long minVal = 0;
      long long maxVal = 0;
      long long sum = 0;
      minVal = ceil(sum*1.0)/x;
      for(int i=0;i<n;i++){
        maxVal += ceil(arr[i]*1.0/x);
        sum += arr[i];
      }
      minVal = ceil(sum*1.0/x);
      cout << minVal << " " << maxVal << endl;
    }
    return 0;
}