#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

void queryPhoneBook( map<string, int> phoneBook) {
    string query;
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook.at(query) << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    string temp;
    // cin >> temp;
    map< string, int> danhba;
    
    for (int i = 0; i < n; i++){
        string name;
        int phonenumber;
        cin >> name >> phonenumber;
        danhba[name] = phonenumber;
    }
    queryPhoneBook(danhba);
    return 0;
}

