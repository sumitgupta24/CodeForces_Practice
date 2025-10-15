#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,c;
      cin >> n >> c;
      vector<long long> cost(n);
      for(int i=0;i<n;i++) cin >> cost[i];
      for(int i=1;i<=n;i++) cost[i-1] = cost[i-1] + i;
      sort(cost.begin(),cost.end());
      int count = 0;
      int i = 0;
      while(i < n && cost[i] <= c){
        c -= cost[i];
        count++;
        i++;
      }
      cout << count << endl;
    }
    return 0;
}