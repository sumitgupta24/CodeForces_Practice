#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      long long w,h;
      cin >> w >> h;
      long long maxArea = 0;
      for(int i=0;i<4;i++){
        long long k;
        cin >> k;
        vector<long long> arr(k);
        for(int i=0;i<k;i++){
          cin >> arr[i];
        }
        long long base = arr[k-1] - arr[0];
        long long height = 0;
        if(i==0 || i==1) height = h;
        else height = w;
        long long area = base*height;
        maxArea = max(maxArea, area);
      }
      cout << maxArea << endl;
    }
    return 0;
}