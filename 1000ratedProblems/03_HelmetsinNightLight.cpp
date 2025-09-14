#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n,p;
      cin >> n >> p;
      vector<long long> a(n);
      vector<long long> b(n);
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++) cin >> b[i];
      vector<pair<long long,long long>> arr;
      for(int i=0;i<n;i++){
        arr.push_back({b[i],a[i]});
      }
      sort(arr.begin(),arr.end());
      long long minCost = p;
      long long totalShared = 1;
      for(auto it: arr){
        long long cost = it.first;
        long long count = it.second;
        if(cost>=p) break;
        if(totalShared + count > n){
          minCost += (n-totalShared)*cost;
          totalShared = n;
          break;
        }
        else{
          minCost += count*cost;
          totalShared += count;
        }
      }
      if(totalShared<n) minCost += (n-totalShared)*p;
      cout << minCost << endl;
    }
    return 0;
}