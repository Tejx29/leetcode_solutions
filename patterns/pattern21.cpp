#include<iostream>
using namespace std;

void pattern21 (int n) {

    // int spaces = 0;
    
    // for(int i = 1; i <= n; i++) {

    //     for(int j = i; j <= n ; j++) {
    //         cout << "*";
    //     }

    //     for(int j = 1; j <= spaces; j++) {
    //         cout << " ";
    //     }
        
    //     for(int j = i; j <= n; j++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    //     spaces += 2;

    // }
    
    // spaces = 2 * n - 2;
    
    // for(int i = 1; i <= n; i++) {

    //     for(int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }

    //     for(int j = 1; j <= spaces; j++) {
    //         cout << " ";
    //     }
        
    //     for(int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    //     spaces -= 2;

    // }


    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {

            if(i == 0 || j == 0 || i == n - 1 || j == n - 1) {

                cout << "*";

            }

            else {

                cout << " ";

            }

        }

        cout << endl;

    }

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern21(n);

    return 0;
}
