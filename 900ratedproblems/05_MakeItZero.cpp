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
      if(n%2==0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
      }
      else{
        cout << 4 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        cout << n-1 << " " << n << endl;
        cout << n-1 << " " << n << endl;
      }
    }
    return 0;
}


//Input
// 6
// 4
// 1 2 3 0
// 8
// 3 1 4 1 5 9 2 6
// 6
// 1 5 4 1 4 7
// 5
// 0 0 0 0 0
// 7
// 1 1 9 9 0 1 8
// 3
// 100 100 0

// Output
// 1
// 1 4
// 2
// 4 7
// 1 8
// 6
// 1 2
// 3 4
// 5 6
// 1 3
// 4 6
// 1 6
// 0
// 4
// 1 2
// 6 7
// 3 4
// 6 7
// 1
// 1 2

