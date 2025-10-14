#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      long long n = str.length();
      long long maxCount = 0;
      long long count = 0;
      for(int i=0;i<str.length();i++){
        if(str[i] == '1') count++;
        else{
          count = 0;
        }
        maxCount = max(maxCount,count);
      }
      if(maxCount == n){
        cout << n*n << endl;
      }
      else{
        int l = 0,r = n-1;
        if(str[l] == '1' && str[r] == '1'){
          long long count = 0;
          while(l < n && str[l] == '1'){
            count++;
            l++;
          }
          while(r > l && str[r] == '1'){
            count++;
            r--;
          }
          maxCount = max(maxCount,count);
        }
        maxCount += 1;
        long long temp = (maxCount + 1)/2;
        cout << (temp) * (maxCount/2) << endl;
      }
    }
    return 0;
}