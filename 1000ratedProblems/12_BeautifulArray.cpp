#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,k,b,s;
      cin >> n >> k >> b >> s;
      long long minSum = k*b;
      long long maxSum = k*b + (k-1)*n;
      if(s<minSum || s>maxSum) cout << -1 << endl;
      else{
        vector<long long> ans(n,0);
        ans[0] = minSum;
        s -= minSum;
        for(long long i=0;i<n;i++){
          long long temp = min(k-1,s);
          ans[i] += temp;
          s -= temp;
        }
        for(long long i=0;i<n;i++){
          cout << ans[i] << " ";
        }
        cout << endl;
      }
    }
    return 0;
}