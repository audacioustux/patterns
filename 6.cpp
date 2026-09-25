#include <iostream>

using namespace std;

int main() {
    int row;
    cin >> row;
    for(int i = row; i > 0; i--) {
        cout << string(i, '*') << '\n';
    }
}
