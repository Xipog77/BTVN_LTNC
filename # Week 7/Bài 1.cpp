// binary search

#include <vector> 
#include <iostream>

using namespace  std;

int binary_search(vector<int> a, int x){
    
    int low = 0;
    int high = a.size();
    int mid;
    while (low <= high){
        
        mid = (low + high)/2;
        if (a[mid] == x) break;
        else if (a[mid] < x) low = mid + 1;
        else if (a[mid] > x) high = mid - 1;
        
    }
    if (a[mid] == x) return mid + 1;
    else return - 1;
}

int main(){
    
    cout << "Nhap so phan tu: " << endl;
    int n;
    cin >> n;
    
    vector<int> a;
    
    for (int i = 0; i < n; i++) {
        cout << "Tu nho den lon. ";
        cout << "Nhap gia tri phan tu thu " << i + 1 << " : " << endl;
        int k;
        cin >> k;
        a.push_back(k);
    }
    
    cout << "Nhap so can tim: " << endl;
    int x;
    cin >> x;
    
    if (binary_search(a, x) > 0) cout << "So can tim nam o vi tri: " << binary_search(a,x) << endl << a[binary_search(a,x)];
    else cout << "So can tim khong ton tai!";
}