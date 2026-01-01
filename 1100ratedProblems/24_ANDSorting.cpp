#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      int ans = (1 << 30) - 1;
      for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num != i){
          ans &= num;
        }
      }
      cout << ans << endl;
    }
    return 0;
}