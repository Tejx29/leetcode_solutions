#include<iostream>
using namespace std;

void pattern7 (int n) {

    for(int i = 0; i < n; i++) {

        //space

        for(int j = i; j < n - 1; j++) {
            cout << " ";
        }

        //star

        for(int j = 1; j <= 2 * i + 1; j++) {
            cout << "*";
        }

        //space

        for(int j = i; j < n - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern7(n);

    return 0;
}