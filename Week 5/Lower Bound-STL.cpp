#include <bits/stdc++.h>
using namespace std;

int main() {
    
      int n;
    cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < v.size(); i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--)
    {
        int y;
        cin >> y;
        
        auto it = lower_bound(v.begin(), v.end(), y);
        if(it != v.end() && y == *it)
            cout << "Yes " << (it-v.begin())+1 << endl;
        else
            cout << "No " << (it-v.begin())+1  << endl;
    }
    return 0;
}
