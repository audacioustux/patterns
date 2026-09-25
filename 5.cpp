#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row;
    for(int i = 1; i <= row; i++) {
        string space = string(row-i, ' ');
        string s = string(i, '*');
        cout << space << s << '\n';
    }
}
