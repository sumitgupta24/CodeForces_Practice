#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      n = n-1;
      long long msb = log2(n);
      int val = pow(2,msb) - 1;
      while(val >= 0){
        cout << val << " ";
        val--;
      }
      val = pow(2,msb);
      while(val <= n){
        cout << val << " ";
        val++;
      }
      cout << endl;
    }
    return 0;
}