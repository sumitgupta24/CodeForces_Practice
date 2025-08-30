#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,q;
      cin >> n >> q;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      vector<long long> prefixSum(n+1,0);
      for(int i=1;i<=n;i++) prefixSum[i] = prefixSum[i-1] + arr[i-1];
      long long sum = prefixSum[n];
      for(int i=0;i<q;i++){
        int l,r,k;
        cin >> l >> r >> k;
        long long newSum = (sum - (prefixSum[r]-prefixSum[l-1]) + (r-l+1)*1LL*k);
        if(newSum%2==1) cout << "yes" << endl;
        else cout << "no" << endl;
      }
    }
    return 0;
}

