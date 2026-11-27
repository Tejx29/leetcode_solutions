#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int func_nCr (int row, int col) {

    int result = 1;

    for(int i = 0; i < col; i++) {

        result = result * (row - i);
        result = result / (i + 1);

    }

    return result;

}

int main() {

    int row, col;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    cout << "Value: " << func_nCr(row - 1, col - 1);

}