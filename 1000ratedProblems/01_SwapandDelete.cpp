#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      long long n = str.length();
      long long zeroCount = 0;
      long long oneCount = 0;
      for(char c: str){
        if(c=='0') zeroCount++;
        else oneCount++;
      }
      long long ans = 0;
      for(long long i=0;i<n;i++){
        if(str[i]=='1'){
          if(zeroCount<=0){
            ans = n - i;
            break;
          }
          zeroCount--;
        }
        else{
          if(oneCount<=0){
            ans = n - i;
            break;
          }
          oneCount--;
        }
      }
      cout << ans << endl;
    }
    return 0;
}