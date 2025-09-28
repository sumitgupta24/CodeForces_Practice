#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string a, b;
      cin >> a >> b;
      int n = a.length();
      int m = b.length();
      long long len = min(n,m);
      long long lcs = 0;
      for(long long k=1;k<=len;k++){
        for(int i=0;i+k<=n;i++){
          for(int j=0;j+k<=m;j++){
            string stra = a.substr(i,k);
            string strb = b.substr(j,k);
            if(stra == strb) lcs = max(k, lcs);
          }
        }
      }
      cout << n + m - 2*lcs << endl;
    }
    return 0;
}