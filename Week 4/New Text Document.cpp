#include <iostream>
using namespace std;
int main()
{
    int n, p;
    int count = 0;
    cin >> n >> p;
    if (p == 1 or p == n or (p == n-1 && n%2 !=0)) cout << count;
    else if (n/2 >= p)
    {
        int temp = 1;
        while (temp < p) {
            temp += 2;
            count ++;
        }
        cout << count;
    }
    else{
        int temp = n;
        while ((temp > p && p%2 != 0) or (temp > p + 1 && p%2 == 0))
        {
            temp -=2;
            count ++;
        }
        cout << count ;
    }
    
    
}
