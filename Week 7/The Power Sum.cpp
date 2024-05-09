#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void counting(int* count, int A, int n, vector<int> v, int i, int  sum) {
    for (int j = i + 1; j < v.size(); j++) {
        if (sum + v[j] < A) {
            counting(count, A, n, v, j, sum + v[j]);
        }
        if (sum + v[j] == A) {
            (*count)++;
            return;
        }
        if (sum + v[j] > A) return;
    }
}

int main() {
    int n, A;
    cin >> A >> n;
    if (A == 0) cout << 0;
    else if (A == 1 or n == 1) cout << 1;
    else {
        vector<int> v;
        for (int i = 1; pow(i, n) <= A; i++) v.push_back(pow(i, n));
        int count = 0;
        if (v[v.size() - 1] == A) {
            v.pop_back();
            count++;
        }
        for (int i = 0; i < v.size(); i++) counting(&count, A, n, v, i, v[i]);

        cout << count;
    }
}
