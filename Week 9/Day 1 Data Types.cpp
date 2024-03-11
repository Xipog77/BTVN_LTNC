#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int n;
    double a;
    string str;
    
    cin >> n;
    cin >> a;
    cin.ignore();
    getline(cin,str);
    
    n += i;
    a += d;
    
    cout << n << endl;
    cout << setprecision(1)  << fixed << a << endl;
    cout << s << str << endl;
    return 0;
}