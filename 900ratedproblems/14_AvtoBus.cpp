#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      if(n<4 || n%2==1) cout << -1 << endl;
      else{
        long long minBuses = ceil(n*1.0/6);
        long long maxBuses = n/4;
        cout << minBuses << " " << maxBuses << endl;
      }
    }
    return 0;
}

// works in C++ 17 compiler in CodeForces
