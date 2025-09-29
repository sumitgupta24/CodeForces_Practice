#include<bits/stdc++.h>
using namespace std;

bool isFair(long long n){
  long long temp = n;
  while(temp != 0){
    int digit = temp % 10;
    if(digit!=0 && n % digit != 0) return false;
    temp = temp / 10;
  }
  return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      while(!isFair(n)) n += 1;
      cout << n << endl;
    }
    return 0;
}