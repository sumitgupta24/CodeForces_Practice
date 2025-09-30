#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long a,b;
      cin >> a >> b;
      long long ra = a;
      long long rb = b;
      while(ra % 2 == 0) ra = ra/2;
      while(rb % 2 == 0) rb = rb/2;
      if(ra != rb) cout << -1 << endl;
      else{
        a = a / ra;
        b = b / rb;
        a = log2(a);
        b = log2(b);
        long long val = ceil(abs(a-b) / 3.0);
        cout << val << endl;
      }
    }
    return 0;
}