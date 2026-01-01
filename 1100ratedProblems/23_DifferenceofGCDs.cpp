#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      long long l,r;
      cin >> l >> r;
      vector<long long> ans;
      bool flag = true;
      for(int i=1;i<=n;i++){
        long long val = ((l + i - 1) / i) * i;
        ans.push_back(val);
        if(val > r){
          cout << "NO" << endl;
          flag = false;
        }
      }
      if(flag){
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
          cout << ans[i] << " ";
        }
        cout << endl;
      }
    }
    return 0;
}