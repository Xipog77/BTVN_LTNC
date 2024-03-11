#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int q, a, b;
    cin >> q >> a >> b;
    q--;
    a--;
    b--;
        vec.erase(vec.begin()+q);
        vec.erase(vec.begin()+a, vec.begin()+b);
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size();i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
