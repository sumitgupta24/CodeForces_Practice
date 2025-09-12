#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n;
  		cin >> n;
  		int twoCount = 0, threeCount = 0;
  		while(n % 2 == 0){
  			n /= 2;
  			twoCount++;
  		}
  		while(n % 3 == 0){
  			n /= 3;
  			threeCount++;
  		}
  		if(n == 1 && twoCount <= threeCount){
  			cout << 2 * threeCount - twoCount << endl;
  		} 
  		else {
  			cout << -1 << endl;
  		}
    }
    return 0;
}