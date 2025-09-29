#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
  if(n==2 || n==3) return true;
  for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}

long long find(long long n){
  if(n==2 || n==3) return n;
  if(n!=2 && n%2==0) n = n+1;
  while(true){
    if(isPrime(n)){
      break;
    }
    n += 2;
  }
  return n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
      long long d;
      cin >> d;
      long long newd = d + 1;
      long long p = find(newd);
      long long q = find(d+p);
      cout << min((long long)pow(p,3),p*q) << endl;
    }
    return 0;
}

