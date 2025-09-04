#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string s,t;
      cin >> s >> t;
      vector<int> freqs(26,0);
      vector<int> freqt(26,0);
      for(int i=0;i<s.length();i++) freqs[s[i]-'A']++;
      for(int i=0;i<t.length();i++) freqt[t[i]-'A']++;
      bool flag = true;
      for(int i=0;i<26;i++){
        if(freqs[i]-freqt[i]<0){
          flag = false;
          break;
        }
      }
      vector<int> toRemove(26,0);
      for(int i=0;i<26;i++) toRemove[i] = freqs[i] - freqt[i];
      string temp = "";
      for(char c: s){
        int ind = c - 'A';
        if(toRemove[ind]>0) toRemove[ind]--;
        else temp += c;
      }
      if(!flag) cout << "no" << endl;
      else if(temp==t) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    return 0;
}