#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    map <string,int> student;
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i ++){
        int type;
        cin >> type;
        string name;
        cin >> name;
        if ( type == 1 ){
            int mark;
            cin >> mark;
            student[name] += mark;
        }
        else if (type == 2){
            student.erase(name);
        }
        else if (type == 3){
            if (student[name] == 0) cout << 0 << endl;
            else {
            cout << student[name] << endl;
            }
        }
    }
      
    return 0;
}



