#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n % 2 != 0) cout << "Weird" << endl;
    
    else{
        
        if ((n >= 2 && n < 5) or ( n > 20 )) cout << "Not Weird" <<endl;
        
        else cout << "Weird" <<endl;
        
    }
    
    return 0;
    
}
