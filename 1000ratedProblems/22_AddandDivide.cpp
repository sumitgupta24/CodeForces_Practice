#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long a,b;
      cin >> a >> b;
      int minOps = INT_MAX;
      for(int i=0;i<32;i++){
        int ops = i;
        int newb = b + i;
        if(newb==1) continue;
        int newa = a;
        while(newa > 0){
          newa = newa / newb;
          ops++;
        }
        minOps = min(minOps,ops);
      }
      cout << minOps << endl;
    }
    return 0;
}