#include <iostream>
#include <vector>
#include <string>

using namespace std;


void print_map(char map[10][10]) {
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (map[i][j] == '-') return;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int find_slot_hori(char map[10][10], int k, string target) {

    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (map[k][i] == '-' or target[count] == map[k][i]) count++;
        
        if (count == target.size()) return i - count + 1;

        if (map[k][i] == '+') count = 0;
    }
    return -1;

}


int find_slot_verti(char map[10][10], int k, string target) {

    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (map[i][k] == '-' or target[count] == map[i][k]) count++;

        if (count == target.size()) return i - count + 1;

        if (map[i][k] == '+') count = 0;
    }
    return -1;
}

void find_answer(char map[10][10], vector<string> words)
{
    string target = words[words.size() - 1];
    char re_map[10][10];
    //chieu doc
    for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                re_map[i][j] = map[i][j];
            }
        }
        vector<string> re_words = words;
        
        
        int n = find_slot_hori(map, i, target);
        if (n != -1) {
            for (int j = 0; j < target.size(); j++) re_map[i][n+j] = target[j];
            re_words.pop_back();
            
            if (!re_words.empty()) find_answer(re_map, re_words);
            else print_map(re_map);
        }
        
    }

    // chieu ngang

    for (int i = 0; i < 10; i++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                re_map[i][j] = map[i][j];
            }
        }
        vector<string> re_words = words;

        int n = find_slot_verti(map, i, target);
        if (n != -1) {
            for (int j = 0; j < target.size(); j++) re_map[n + j][i]= target[j];
            re_words.pop_back();
            
            if (!re_words.empty()) find_answer(re_map, re_words);
            else print_map(re_map);
        }

    }
}
int main()
{
    char map[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> map[i][j];
        }
    }
    string str;
    getline(cin, str);
    getline(cin, str);
    vector <string> words;
    string word_divided;
    for (char c : str) {
        if (c == ';') {
            words.push_back(word_divided);
            word_divided.clear();
        }
        else {
            word_divided += c;
        }
    }
    if (!word_divided.empty()) {
        words.push_back(word_divided);
    }
    find_answer(map, words);

}


