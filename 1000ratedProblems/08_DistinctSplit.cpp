#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;
      
      vector<int> left(n + 1, 0), right(n + 1, 0);
      set<char> st;
      for(int i = 0; i < n; i++){
          st.insert(s[i]);
          left[i + 1] = st.size();
      }
      st.clear();
      for(int i = n - 1; i >= 0; i--){
          st.insert(s[i]);
          right[i] = st.size();
      }
      int maxSum = 0;
      for(int i = 1; i < n; i++){
          maxSum = max(maxSum, left[i] + right[i]);
      }
      
      cout << maxSum << endl;
    }
    
    return 0;
}
