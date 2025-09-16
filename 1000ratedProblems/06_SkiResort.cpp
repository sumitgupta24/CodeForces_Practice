#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,k,q;
      cin >> n >> k >> q;
      vector<long long> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      long long total = 0;
      long long count = 0;
      for(int i=0;i<n;i++){
        if(arr[i]<=q){
          count++;
        }
        else{
          if(count>=k) total += (count-k+1)*(count-k+2)/2;
          count = 0;
        }
      }
      if(count>=k) total += (count-k+1)*(count-k+2)/2;
      cout << total << endl;
    }
    return 0;
}