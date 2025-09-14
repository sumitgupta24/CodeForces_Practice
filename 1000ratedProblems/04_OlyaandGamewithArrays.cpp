#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n;
      cin >> n;
      vector<vector<long long>> arr;
      for(int i=0;i<n;i++){
        long long m;
        cin >> m;
        vector<long long> temp(m);
        for(int i=0;i<m;i++) cin >> temp[i];
        sort(temp.begin(),temp.end());
        arr.push_back(temp);
      }
      long long secondMinSum = 0;
      long long minVal = INT_MAX;
      long long secondMinVal = INT_MAX;
      for(int i=0;i<n;i++){
        minVal = min(minVal, arr[i][0]);
        if(arr[i].size() >= 2) secondMinSum += arr[i][1];
        if(arr[i].size() >= 2) secondMinVal = min(secondMinVal, arr[i][1]);
      }
      cout << minVal + secondMinSum - secondMinVal << endl;
    }
    return 0;
}