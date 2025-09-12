#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      int n = str.length();
      int zeroCount = 0;
      int oneCount = 0;
      for(int i=0;i<n;i++){
        if(str[i]=='0') zeroCount++;
        else oneCount++;
      }
      if(min(zeroCount,oneCount)%2==1) cout << "DA" << endl;
      else cout << "NET" << endl;
    }
    return 0;
}