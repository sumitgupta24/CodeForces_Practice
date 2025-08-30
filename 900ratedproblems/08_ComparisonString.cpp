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
      int maxg = 0;
      int maxs = 0;
      int curr = 0;
      for(int i=0;i<n;i++){
        if(str[i]=='>') curr++;
        else curr = 0;
        maxg = max(maxg,curr);
      }
      curr = 0;
      for(int i=0;i<n;i++){
        if(str[i]=='<') curr++;
        else curr = 0;
        maxs = max(maxs,curr);
      }
      int maxi = max(maxg,maxs);
      cout << maxi + 1 << endl;
    }
    return 0;
}