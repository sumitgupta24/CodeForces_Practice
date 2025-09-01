#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      int zeroCount = 0;
      for(int i=0;i<n;i++) if(arr[i]==0) zeroCount++;
      bool flag = false;
      int i=0,j=n-1;
      while(arr[i]==0) i++;
      while(arr[j]==0) j--;
      for(int k=i;k<=j;k++){
        if(arr[k]==0) flag = true;
      }
      if(zeroCount==n) cout << 0 << endl;
      else if(!flag) cout << 1 << endl;
      else cout << 2 << endl;
    }
    return 0;
}