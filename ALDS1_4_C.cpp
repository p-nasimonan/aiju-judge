#include <iostream>
#include <cstring>

//与えられる文字列は、'A', 'C', 'G', 'T' の４種類の文字から構成される。
//1≤文字列の長さ≤12
//n≤1,000,000


const int M = 1000001;
std::string table[M];

int getChar(char ch) {
    if (ch == 'A') return 1;
    if (ch == 'C') return 2;
    if (ch == 'G') return 3;
    if (ch == 'T') return 4;
    return 0;
}

unsigned long long getKey(const std::string& str) {
    unsigned long long sum = 0, p = 1;
    for (char ch : str) {
        sum += getChar(ch) * p;
        p *= 5;
    }
    return sum;
}

int hash1(unsigned long long key) {
    return key % M;
}

int hash2(unsigned long long key) {
    return 1 + (key % (M - 1));
}

bool find(const std::string& str) {
    unsigned long long key = getKey(str);
    int h;
    for (int i = 0; ; ++i) {
        h = (hash1(key) + i * hash2(key)) % M;
        if (table[h] == str) return true;
        if (table[h].empty()) return false;
    }
}

void insert(const std::string& str) {
    unsigned long long key = getKey(str);
    int h;
    for (int i = 0; ; ++i) {
        h = (hash1(key) + i * hash2(key)) % M;
        if (table[h] == str) return;
        if (table[h].empty()) {
            table[h] = str;
            return;
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::string command, key;
    for (int i = 0; i < n; ++i) {
        std::cin >> command >> key;
        if (command == "insert") {
            insert(key);
        } else if (command == "find") {
            if (find(key)) {
                std::cout << "yes" << std::endl;
            } else {
                std::cout << "no" << std::endl;
            }
        }
    }
    return 0;
}