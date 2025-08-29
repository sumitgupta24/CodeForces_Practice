#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        vector<long long> temp(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        if(temp==arr || k>1) cout << "YES";
        else cout << "NO";
    }
    return 0;
}

// we need to check it we can sort the array or not by reversing a subarray of length atmost k
// we found out that if k==1 and array is unsorted the answer would be always "NO"
// if the array is sorted by default we return "YES"
// we also found out that if we have k==2 then we can always sort the array therefore if k>1 the answer would be 'YES'

//input                 
// 5
// 3 2
// 1 2 3
// 3 1
// 9 9 9
// 4 4
// 6 4 2 1
// 4 3
// 10 3 830 14
// 2 1
// 3 1

//output

// YES
// YES
// YES
// YES
// NO