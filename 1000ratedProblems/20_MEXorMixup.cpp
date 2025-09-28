#include<bits/stdc++.h>
using namespace std;

long long calXorr(long long n){
  long long mod = n % 4;
  if(mod == 0) return n;
  else if(mod == 1) return 1;
  else if(mod == 2) return n+1;
  else return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      long long mex, xorr;
      cin >> mex >> xorr;
      long long x = calXorr(mex-1);
      if(x == xorr) cout << mex << endl;
      else if((x ^ xorr) != mex) cout << mex + 1 << endl;
      else cout << mex + 2 << endl;
    }
    return 0;
}