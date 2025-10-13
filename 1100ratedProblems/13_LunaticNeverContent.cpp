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
      long long ans = 0;
      for(int i=0;i<n;i++){
        ans = gcd(ans,abs(arr[i] - arr[n-i-1]));
      }
      cout << ans << endl;
    }
    return 0;
}