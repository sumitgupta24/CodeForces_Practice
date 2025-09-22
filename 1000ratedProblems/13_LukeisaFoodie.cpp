#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,x;
      cin >> n >> x;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      vector<pair<long long, long long>> range;
      for(int i=0;i<n;i++) range.push_back({arr[i]-x,arr[i]+x});
      long long left = range[0].first;
      long long right = range[0].second;
      long long count = 0;
      for(int i=1;i<n;i++){
        left = max(left, range[i].first);
        right = min(right,range[i].second);
        if(left > right){
          count += 1;
          left = range[i].first;
          right = range[i].second;
        }
      }
      cout << count << endl;
    }
    return 0;
}