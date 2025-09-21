#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      char c;
      cin >> c;
      string str;
      cin >> str;
      str += str;
      int lastIndex = -1;
      int ans = 0;
      for(int i=2*n-1;i>=0;i--){
        if(str[i]=='g') lastIndex = i;
        if(str[i]==c){
          int diff = lastIndex - i;
          ans = max(ans, diff);
        }
      }
      cout << ans << endl;
    }
    
    return 0;
}
