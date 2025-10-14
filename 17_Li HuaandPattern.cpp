#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n,k;
      cin >> n >> k;
      vector<vector<long long>> grid(n,vector<long long>(n));
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cin >> grid[i][j];
        }
      }
      vector<vector<long long>> temp = grid;
      int i = 0;
      int j = n-1;
      long long count = 0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if(grid[i][j] != grid[n-i-1][n-j-1]) count++;
        }
      }
      count = count / 2;
      if(count > k){
        cout << "no" << endl;
      }
      else{
        long long rem = k - count;
        if(rem % 2 == 0) cout << "yes" << endl;
        else{
          if(n % 2 == 0) cout << "no" << endl;
          else cout << "yes" << endl;
        }
      }
    }
    return 0;
}