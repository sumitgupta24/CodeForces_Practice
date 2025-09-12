#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      bool flag = false;
      for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
          cout << "Yes" << endl;
          cout << i << " " << i+1 << " " << i+2 << endl;
          flag = true;
          break;
        }
      }
      if(!flag) cout << "no" << endl;
    }
    return 0;
}