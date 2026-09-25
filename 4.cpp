#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row; // row of one half of diamond, either top or down

    for(int i = 1; i <= row; i++) {
        string space = string(row-i, ' ');
        string s = string((i*2)-1, '*');
        cout << space << s << '\n';
    }

    for(int i = row-1; i >= 1; i--) {
        string space = string(row-i, ' ');
        string s = string((i*2)-1, '*');
        cout << space << s << '\n';
    }
}
