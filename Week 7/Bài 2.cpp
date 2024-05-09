
#include <iostream>

int main(){
    
    int i = 0, j = 0, k = 0;
    char c[4];
    c[0] = 'a';
    c[1] = 'b';
    c[2] = 'c';
    c[3] = 'd';
    
    while (i < 4){
        std::cout << c[i] << c[j] << c[k] << std::endl;
        k ++;
        if (k >= 4) {
            k = 0;
            j++;
        }
        if (j >= 4){
            j = 0;
            i++;
        }
        
    }
    return 0;
}

