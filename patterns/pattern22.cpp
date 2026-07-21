#include<iostream>
using namespace std;

void pattern20 (int n) {

    for(int i = 0; i < 2 * n - 1; i++) {

        for(int j = 0; j < 2 * n - 1; j++) {

            int top = i;
            int right = j;
            int bottom = (2 * n - 2) - i;
            int left = (2 * n - 2) - j;

            cout << (n - min(min(top, bottom), min (left, right)));

        }

        cout << endl;

    }
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern20(n);

    return 0;
}
