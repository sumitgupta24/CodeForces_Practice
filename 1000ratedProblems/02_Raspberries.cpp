  #include<bits/stdc++.h>
  using namespace std;

  int main(){
      int t;
      cin >> t;
      while(t--){
        long long n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int minOps = INT_MAX;
        int evenCount = 0;
        for(int i=0;i<n;i++){
          if(arr[i]%2==0) evenCount++;
          int rem = arr[i]%k;
          if(rem==0){
            minOps = 0;
            break;
          }
          int ops = k - rem;
          minOps = min(minOps,ops);
        }
        if(k==4){
          minOps = min(minOps,max(0,2-evenCount));
        }
        cout << minOps << endl;
      }
      return 0;
  }




