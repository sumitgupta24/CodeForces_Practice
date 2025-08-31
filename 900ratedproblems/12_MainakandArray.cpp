#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      int maxVal = arr[n-1] - arr[0];
      for(int i=1;i<n;i++) maxVal = max(maxVal,arr[i]-arr[0]);
      for(int i=0;i<n-1;i++) maxVal = max(maxVal,arr[n-1]-arr[i]);
      for(int i=0;i<n-1;i++) maxVal = max(maxVal,arr[i]-arr[i+1]);
      cout << maxVal << endl;
    }
    return 0;
}