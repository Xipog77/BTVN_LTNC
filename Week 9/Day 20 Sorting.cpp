#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int b;
    cin >> n;
    
    vector<int> a;
    
        for (int i = 0; i < n; i++) {
            cin >> b;
            a.push_back(b);
        }
            //cout << "original a: ";
            //for (int i = 0; i <n; i++) cout << a[i] << " ";
            int numSwaps = 0;  
        for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;
        
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }
        numSwaps += numberOfSwaps;
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0) {
            break;
        }
    }
    cout << "Array is sorted in " << numSwaps <<" swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
  
}
