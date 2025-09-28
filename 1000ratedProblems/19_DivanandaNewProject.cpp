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
      vector<pair<long long, long long>> mpp;
      for(int i=0;i<n;i++) mpp.push_back({arr[i],i});
      long long totalDistance = 0;
      sort(mpp.rbegin(),mpp.rend());
      sort(arr.rbegin(),arr.rend());
      long long ind = 1;
      for(int i=0;i<n;i+=2){
        totalDistance += 2*(ind)*arr[i];
        if(i+1<n) totalDistance += 2*(ind)*arr[i+1];
        ind += 1;
      }
      vector<int> ans(n+1,0);
      ans[0] = 0;
      long long pos = 1;
      for(int i=0;i<n;i++){
        ans[mpp[i].second+1] = pos;
        if(pos < 0) pos = abs(pos) + 1;
        else pos = -pos;
      }
      cout << totalDistance << endl;
      for(int i=0;i<=n;i++) cout << ans[i] << " ";
      cout << endl;
    }
    return 0;
}