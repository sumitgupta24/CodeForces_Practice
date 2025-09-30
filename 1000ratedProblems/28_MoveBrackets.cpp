#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string str;
      cin >> str;
      int sum = 0;
      int ops = 0;
      for(char& ch: str){
        if(ch == '(') sum++;
        else if(ch == ')') sum--;
        if(sum < 0){
          ops++;
          sum = 0;
        }
      }
      cout << ops << endl;
    }
    return 0;
}