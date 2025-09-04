#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int a, b, c;
      cin >> a >> b >> c;
      int na = b - (c - b);
      int nb = a + (c - a)/2;
      int nc = a + 2*(b - a);
      if(na >= a && na % a == 0 && na != 0) {
          cout << "yes" << endl;
      }
      else if(nb >= b && (c-a)%2 == 0 && nb % b == 0 && nb != 0) {
          cout << "yes" << endl;
      }
      else if(nc >= c && nc % c == 0 && nc != 0) {
          cout << "yes" << endl;
      }
      else cout << "no" << endl;
    }
    return 0;
}
