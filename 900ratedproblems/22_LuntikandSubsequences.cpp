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
      int oneCount = 0;
      for(int i=0;i<n;i++){
        if(arr[i]==1) oneCount++;
        else if(arr[i]==0) zeroCount++;
      }
      long long answer = 0;
      if(oneCount>0){
        answer = pow(2,zeroCount)*oneCount;
      }
      
      cout << answer << endl;
    }
    return 0;
}