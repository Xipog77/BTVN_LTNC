#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    string s;
    getline(cin,s);
    for (int i = 0; i < n; i++){
        
        getline(cin,s);
        
        for (int j = 0; j < s.length(); j++){
            if (j%2 == 0) cout << s[j];
        }
        
        cout << " ";
        
        for (int k = 0; k < s.length(); k++){
            
            if (k%2 != 0) cout << s[k];
        }
        cout << endl;
    }     
    return 0;
}
