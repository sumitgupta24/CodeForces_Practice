#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
      long long n,k,a,b;
      cin >> n >> k >> a >> b;
      vector<pair<long long,long long>> arr(n+1);
      for(int i=1;i<=n;i++){
        cin >> arr[i].first;
        cin >> arr[i].second;
      }
      long long answer = abs(arr[b].first - arr[a].first) + abs(arr[b].second - arr[a].second);
      long long miniFromA = 1e17;
      long long miniFromB = 1e17;
      for(int i=1;i<=k;i++){
        miniFromA = min(miniFromA,abs(arr[i].first - arr[a].first) + abs(arr[i].second - arr[a].second));
        miniFromB = min(miniFromB,abs(arr[b].first - arr[i].first) + abs(arr[b].second - arr[i].second));
      }
      answer = min(answer,miniFromA + miniFromB);
      cout << answer << endl;
    }
    return 0;
}