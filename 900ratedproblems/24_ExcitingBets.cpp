#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long a,b;
      cin >> a >> b;
      if(a==b){
        cout << 0 << " " << 0 << endl;
      }
      else{
        long long maxVal = abs(a-b);
        long long ops = min(a%maxVal,maxVal - a%maxVal);
        cout << maxVal << " " << ops << endl; 
      }
    }
    return 0;
}