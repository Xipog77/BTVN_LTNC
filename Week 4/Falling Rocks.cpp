#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> m >> n;
    int map[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            char c;
            cin >> c;
            
            if (c == 'R') map[i][j] = 0;
            if (c == 'E') map[i][j] = 1;
            if (c == 'Y') {
                map[i][j] = 2;
            }
        }
    }
    
    for (int i = 1; i < n; i++){
        for (int j = 0; j < m; j++){
        
            if (map[i][j] == 1){
                if (map[i-1][j] == 2) map[i][j] = 2;
                if (i > 0 && j > 0 && map[i - 1][j - 1] == 2 && map[i-1][j] == 1) map[i][j] = 2;
                if (j < m - 1 && map[i-1][j + 1] == 2 && map[i-1][j] == 1) map[i][j] = 2;
        }
        }
    }
    
    for (int j = 0; j < m; j++){
        
        if (map[n-1][j] == 2){
            cout << "YES";
            break;
        }

        if (j == m -1 && map[n-1][j] != 2) cout << "NO";
        
    }

    return 0;
}
