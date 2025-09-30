#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      unordered_set<long long> st;
      for(int i=0;i<n;i++) st.insert(arr[i]);
      if(st.size() < n) cout << "yes" << endl;
      else cout << "no" << endl;
    }
    return 0;
}