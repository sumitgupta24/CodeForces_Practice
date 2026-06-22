#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if((m % n) != 0) {
        cout << -1 << endl;
        return 0;
    } 

    int count = 0;

    int div = m / n;

    while(div % 2 == 0) {
        div = div / 2;
        count++;
    }

    while(div % 3 == 0) {
        div = div / 3;
        count++;
    }

    if(div != 1) cout << -1 << endl;
    else cout << count << endl;

    return 0;
}