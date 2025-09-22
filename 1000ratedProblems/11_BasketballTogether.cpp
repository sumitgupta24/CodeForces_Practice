#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, d;
    cin >> n >> d;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    long long i = -1;
    long long j = n-1;
    long long teamSize = 1;
    long long totalWins = 0;
    while(i<j){
        if(arr[j]*teamSize <= d && i<j){
            i++;
            teamSize++;
        }
        else{
            j--;
            totalWins++;
            teamSize = 1;
        }
    }
    cout << totalWins << endl;
}