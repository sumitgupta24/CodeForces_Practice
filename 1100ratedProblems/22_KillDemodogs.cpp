#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      int mod = 1e9 + 7;
      long long ans = (n * (n + 1)) % mod;
      ans = (ans * (4 * n - 1) % mod * 337) % mod;
      cout << ans << endl;
    }
    return 0;
}