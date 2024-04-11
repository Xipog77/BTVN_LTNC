#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int count(vector<int> str, int target) {
    int count = 0;
    for (int c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector <int> a;
    vector <int> b;
    vector <int> check;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        a.push_back(input);}
    
    for (int i = 0; i < n+1; i++) {
        int input;
        cin >> input;
        b.push_back(input);
    }
    
    for (int num : b) {
        if (find(check.begin(), check.end(), num) == check.end()) {
            check.push_back(num);
        }
    }
    
    int x = check.size();
    for (int i = 0; i < x; i++)
    { 
        if (count(a,check[i]) != count(b,check[i])){
            
            cout << check[i];
            break;
        }
    }
        
    return 0;
}
