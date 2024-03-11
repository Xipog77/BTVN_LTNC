#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n1, n2;
    cin >> n1 >> n2;
    vector<vector<long int>> vec(n1);
    for (int i = 0; i < n1; i++){
        long int temp;
        cin >> temp;
        vec[i].resize(temp);
        for (int j = 0; j < temp; j++) cin >> vec[i][j];
    }
    for (int i = 0; i < n2; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << vec[x][y] << endl;
    }
    
    return 0;
}
