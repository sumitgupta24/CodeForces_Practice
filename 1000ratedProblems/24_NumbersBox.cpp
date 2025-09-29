#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,m;
      cin >> n >> m;
      vector<vector<int>> grid(n,vector<int>(m));
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin >> grid[i][j];
        }
      }
      int negCount = 0;
      int smallestNum = 101;
      int sum = 0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(grid[i][j] < 0) negCount++;
          smallestNum = min(smallestNum, abs(grid[i][j]));
          sum += abs(grid[i][j]);
        }
      }
      if(negCount % 2 == 0) cout << sum << endl;
      else cout << sum - 2*abs(smallestNum) << endl;
    }
    return 0;
}