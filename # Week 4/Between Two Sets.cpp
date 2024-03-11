#include <iostream>
using namespace std ;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n] , b[m];
    for (int i = 0; i < n;i++) cin >> a[i];
    for (int i = 0; i< m;i++) cin >> b[i];
    int max_a = a[0], min_b = b[0], min_a = a[0];
    for (int i = 0; i < n;i++)
    {
        if (a[i] > max_a) max_a = a[i];
        if (a[i] < min_a) min_a = a[i];
    }
    for (int i = 0; i< m;i++)
    {
        if (b[i] > min_b) min_b = b[i];
    }
    int count = 0; 
    for (int i = 1; i <= min_b/min_a;i++)
    {
        int check1 = 0, check2 = 0;
        int temp = min_a * i;
        for (int j = 0; j < n;j++)
        {
            if (temp % a[j] != 0) check1++;
        }
        if (check1 == 0)
        {
            for (int j = 0; j< m;j++)
            {
                if (b[j] % temp !=0) check2++;
            }
        }
        if (check1 == 0 && check2 == 0) count++;
    }
    cout << count;
}
