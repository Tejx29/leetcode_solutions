#include<iostream>
using namespace std;

void pattern17 (int n) {
    
    for(int i = 0; i < n; i++) {

        //space
        for(int j = 1; j < (n * 1) - i; j++) {

            cout << " ";

        }

        //char
        char ch = 'A';
        
        int breakpoint = (2 * i + 1) / 2;

        for(int j = 1; j <= 2 * i + 1; j++) {

            cout << ch;

            if (j <= breakpoint) {
                ch++;
            }

            else {
                ch--;
            }
        }
    

        //space
        for(int j = 1; j <= (n * 1) - i; j++) {

            cout << " ";

        }

        cout << endl;
    }
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    pattern17(n);

    return 0;
}
