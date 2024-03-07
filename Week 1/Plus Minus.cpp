#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int po = 0,ne = 0,ze = 0;
    int arr[n];
    for (int i = 0; i < n;i++) cin >> arr[i];
    for (int i = 0; i < n;i++)
    {
        if (arr[i] > 0) po++;
        else if (arr[i] < 0) ne++;
        else ze++;
    }
    double a,b,c;
    a = ((double)po)/((double)n);
    b = ((double)ne)/((double)n);
    c = ((double)ze)/((double)n);
    cout << setprecision(6) << fixed << a << endl << b << endl << c;
    
}
