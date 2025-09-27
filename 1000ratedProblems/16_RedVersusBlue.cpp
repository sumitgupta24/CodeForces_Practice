#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,r,b;
      cin >> n >> r >> b;
      string str = "";
      int i = 0;
      int parts = r/(b+1);
      int extraReds = r%(b+1);
      for(int i=0;i<=b;i++){
        for(int i=0;i<parts;i++){
          str += 'R';
        }
        if(extraReds > 0){
          str += 'R';
          extraReds--;
        }
        if(i!=b) str += 'B';
      }
      cout << str << endl;
    }
    return 0;
}