#include <iostream>

using namespace std;
int main(){
    int row;
    cin >> row;
    for(int i = 1; i < row + 1; i++) {
        cout << string(i, '*')
        + string(row - i, ' ')
        + string(row - i + 2, '*') 
        + string(2 * (i - 2 + 1), ' ') 
        + string(row - i + 2, '*')
        + string(row - i, ' ')
        + string(i, '*') << endl;
    }
}