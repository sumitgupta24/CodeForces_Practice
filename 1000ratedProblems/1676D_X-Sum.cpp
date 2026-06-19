#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>& grid, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> grid(n, vector<int>(m));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        vector<vector<int>> right(n, vector<int>(m));
        vector<vector<int>> left(n, vector<int>(m));

        int x = n - 1, y = 0;
        while(x >= 0) {
            int i = x, j = y;
            int sum = 0;
            while(i < n && j < m) {
                sum += grid[i][j];
                i++;
                j++;
            }
            i--;
            j--;
            while(i >= 0 && j >= 0) {
                left[i][j] = sum;
                i--;
                j--;
            }
            x--;
        }

        x = 0; y = 1;
        while(y < m) {
            int i = x, j = y;
            int sum = 0;
            while(i < n && j < m) {
                sum += grid[i][j];
                i++;
                j++;
            }
            i--;
            j--;
            while(i >= 0 && j >= 0) {
                left[i][j] = sum;
                i--;
                j--;
            }
            y++;
        }

        x = n - 1, y = m - 1;
        while(y >= 0) {
            int i = x, j = y;
            int sum = 0;
            while(i >= 0 && j < m) {
                sum += grid[i][j];
                i--;
                j++;
            }
            i++;
            j--;
            while(i < n && j >= 0) {
                right[i][j] = sum;
                i++;
                j--;
            }
            y--;
        }

        x = n - 2, y = 0;
        while(x >= 0) {
            int i = x, j = y;
            int sum = 0;
            while(i >= 0 && j < m) {
                sum += grid[i][j];
                i--;
                j++;
            }
            i++;
            j--;
            while(i < n && j >= 0) {
                right[i][j] = sum;
                i++;
                j--;
            }
            x--;
        }

        int maxVal = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                maxVal = max(maxVal, left[i][j] + right[i][j] - grid[i][j]);
            }
        }

        cout << maxVal << endl;
    }

    return 0;
}