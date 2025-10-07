#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,k;
      cin >> n >> k;
      vector<long long> a(n),b(n);
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++) cin >> b[i];
      long long sumA = 0;
      long long maxB = 0;
      long long maxVal = 0;
      for(int i=0;i<min(n,k);i++){
        sumA += a[i];
        maxB = max(maxB, b[i]);
        maxVal = max(maxVal,sumA + (k-(i+1))*maxB);
      }
      cout << maxVal << endl;
    }
    return 0;
}