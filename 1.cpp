#include <iostream>

using namespace std;

int main(){
    int row, col;
    cin >> row;
    cin >> col;

    string r[] = {
        string(col, '*'),
        '*' + string(col-2, ' ') + '*'
    };

    cout << r[0] << endl;
    for(int i = 0; i < row - 2; i++){
        cout << r[1] << endl;
    }
    cout << r[0] << endl;
}