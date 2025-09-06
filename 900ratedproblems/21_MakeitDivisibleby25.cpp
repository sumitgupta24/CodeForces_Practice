#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      string str = to_string(n);
      int len = str.length();
      int ans = INT_MAX;
      for(int lastPos = len - 1; lastPos >= 1; lastPos--){
        char lastDigit = str[lastPos];
        for(int secondLastPos = lastPos - 1; secondLastPos >= 0; secondLastPos--){
          char secondLastDigit = str[secondLastPos];
          bool valid = false;
          if(lastDigit == '0' && (secondLastDigit == '0' || secondLastDigit == '5')) valid = true;
          if(lastDigit == '5' && (secondLastDigit == '2' || secondLastDigit == '7')) valid = true;
          if(valid){
            int removals = (len - 1 - lastPos) + (lastPos - 1 - secondLastPos);
            ans = min(ans, removals);
            break;
          }
        }
      }
      cout << ans << endl;
    }
    return 0;
}