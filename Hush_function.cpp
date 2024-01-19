#include <iostream>

const unsigned long CAPACITY = 5000;

unsigned long case1(const std::string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash += c;
    }
    return hash % CAPACITY;
}

unsigned long case2(const std::string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash += c * 31;
    }
    return hash % CAPACITY;
}

unsigned long case3(const std::string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash = (hash * 31 * c) % 250 % CAPACITY;
    }
    return hash % CAPACITY;
}

// Case 4: hash += hash XOR c;
unsigned long case4(const std::string& str) {
    unsigned long hash = 0;
    for (char c : str) {
        hash += hash ^ c;
    }
    return hash % CAPACITY;
}

int main() {
    using namespace std;

    string input = "fahriddin";

    cout << "Case 1: " << case1(input) << endl;
    cout << "Case 2: " << case2(input) << endl;
    cout << "Case 3: " << case3(input) << endl;
    cout << "Case 4: " << case4(input) << endl;

    return 0;
}

