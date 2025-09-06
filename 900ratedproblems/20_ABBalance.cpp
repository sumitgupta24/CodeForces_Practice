#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string str;
      cin >> str;
      int n = str.length();
      if(str[0]==str[n-1]) cout << str << endl;
      else{
        str[0] = str[0]=='a' ? 'b' : 'a';
        cout << str << endl;
      }
    }
    return 0;
}