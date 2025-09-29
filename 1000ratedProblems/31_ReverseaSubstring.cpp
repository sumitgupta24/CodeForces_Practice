#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool flag = false;
    for(int i=0;i<n-1;i++){
      if(str[i] > str[i+1]){
        cout << "yes" << endl;
        cout << i+1 << " " << i+2 << endl;
        flag = true;
        break;
      }
    }
    if(!flag) cout << "no" << endl;
    return 0;
}