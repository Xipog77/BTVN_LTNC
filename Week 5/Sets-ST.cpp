#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, a, b;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 1) s.insert(b);
        if (a == 2) {
            s.erase(b);
        }
        if (a== 3)
        {
            auto itr =s.find(b);
            if (itr != s.end()) {
                cout << "Yes" << endl;
            }
            else cout << "No" << endl;
        }
    } 
    return 0;
}



