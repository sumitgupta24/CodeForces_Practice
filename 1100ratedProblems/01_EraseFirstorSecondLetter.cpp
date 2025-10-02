#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      string str;
      cin >> str;
      unordered_map<char,int> mpp;
      for(int i=0;i<n;i++){
        char ch = str[i];
        if(mpp.find(ch) == mpp.end()) mpp[ch] = i;
      }
      long long total = 0;
      for(auto& it : mpp){
        int ind = it.second;
        total += (n - ind);
      }
      cout << total << endl;
    }
    return 0;
}