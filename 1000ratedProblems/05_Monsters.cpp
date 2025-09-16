#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      int n,k;
      cin >> n >> k;
      vector<int> arr(n);
      for(int i=0;i<n;i++) cin >> arr[i];
      for(int i=0;i<n;i++){
        arr[i] = arr[i]%k;
        if(arr[i]==0) arr[i] = k;
      }
      
      vector<int> index(n);
      for(int i=0;i<n;i++) index[i] = i;
      stable_sort(index.begin(),index.end(),[&](int i,int j){
        return arr[i] > arr[j];
      });
      
      for(int i=0;i<n;i++){
        cout << index[i] + 1 << " ";
      }
      cout << endl;
    }
    return 0;
}