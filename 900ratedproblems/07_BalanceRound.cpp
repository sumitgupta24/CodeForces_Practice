#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k;
      cin >> n >> k;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      sort(arr.begin(),arr.end());
      int maxCount = 1;
      int count = 1;
      for(int i=1;i<n;i++){
        if(abs(arr[i]-arr[i-1])<=k) count++;
        else{
          count = 1;
        }
        maxCount = max(maxCount,count);
      }
      cout << n - maxCount << endl;
    }
    return 0;
}