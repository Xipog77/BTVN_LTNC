#include <iostream>
#include <string.h>
using namespace std ;
int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    long int s1 = x1,s2 = x2;
    string a1 = "YES", a2 = "NO";
    if (x1 == x2 && v1 == v2) cout << a1;
    else if (x1 >= x2 && v1 >= v2) cout << a2;
    else if (x1 <= x2 && v1 <= v2) cout << a2;
    else if (x1 < x2)
    {
        do {
        s1 += v1;
        s2 += v2;
        }while (s1 < s2);
        if (s1 == s2) cout << a1;
        else cout << a2;
    }
    else if (x1 > x2) {
        do{
            s1 +=v1;
            s2 += v2;
        } while (s2 < s1);
        if (s1 == s2) cout << a1;
        else cout << a2;
    }
    else cout << a2;
}
