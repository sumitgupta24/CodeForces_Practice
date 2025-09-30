#include<bits/stdc++.h>
using namespace std;

long long ceil_division(long long a,long long b){
  return (a + b - 1) / b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      long long x,y,k;
      cin >> x >> y >> k;
      long long totalSticksRequired = k*y + k - 1;
      long long val = ceil_division(totalSticksRequired,x-1);
      cout << val + k << endl;
    }
    return 0;
}