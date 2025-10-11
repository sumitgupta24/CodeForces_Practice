#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,x;
      cin >> n >> x;
      vector<long long> a(n),b(n),c(n);
      for(int i=0;i<n;i++) cin >> a[i];
      for(int i=0;i<n;i++) cin >> b[i];
      for(int i=0;i<n;i++) cin >> c[i];
      long long ora = 0;
      long long orb = 0;
      long long orc = 0;
      set<int> preA,preB,preC;
      preA.insert(ora);
      preB.insert(orb);
      preC.insert(orc);
      for(int i=0;i<n;i++){
        ora = ora | a[i];
        preA.insert(ora);
        orb = orb | b[i];
        preB.insert(orb);
        orc = orc | c[i];
        preC.insert(orc);
      }
      bool flag = false;
      for(int a: preA){
        for(int b: preB){
          for(int c: preC){
            if((a | b | c) == x){
              flag = true;
              break;
            }
          }
          if(flag) break;
        }
        if(flag) break;
      }
      if(flag) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    return 0;
}