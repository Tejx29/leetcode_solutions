#include<iostream>
using namespace std;

void pattern12 (int n) {

    int space = 2 * (n - 1);

    for(int i = 1; i <=n; i++) {

        //number
        for(int j = 1; j <= i; j++ ) {
            cout << j;
        }
    
        //space
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }

        //reverse of number
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    
        space -= 2;

    }
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern12(n);

    return 0;
}
