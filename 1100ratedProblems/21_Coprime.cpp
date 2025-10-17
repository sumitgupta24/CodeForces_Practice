#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
  if(a == 0) return b;
  return gcd(b%a,a);
}

int main(){
    int t;
    cin >> t;
    vector<long long> pairs[1001];
    for(int i=1;i<=1000;i++){
      for(int j=1;j<=1000;j++){
        if(gcd(i,j) == 1) pairs[i].push_back(j);
      }
    }
    while(t--){
      long long n;
      cin >> n;
      vector<long long> arr(n+1);
      for(int i=1;i<=n;i++) cin >> arr[i];
      vector<long long> lastIndex(1001);
      for(int i=1;i<=n;i++) lastIndex[arr[i]] = i;
      long long answer = -1;
      for(int i=1;i<1001;i++){
        if(lastIndex[i] == 0) continue;
        for(int j: pairs[i]){
          if(lastIndex[j] != 0) answer = max(answer,lastIndex[i] + lastIndex[j]);
        }
      }
      cout << answer << endl;
    }
    return 0;
}