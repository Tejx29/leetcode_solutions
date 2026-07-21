#include<iostream>
using namespace std;

void reverse (int n) {
    
    int reverse = 0;

        while (n != 0) {

            int lastdigit = n % 10;
        
            n = n / 10;

            if (reverse > INT_MAX / 10 ||
                (reverse == INT_MAX / 10 && lastdigit > 7))
                cout << 0;

            if (reverse < INT_MIN / 10 ||
                (reverse == INT_MIN / 10 && lastdigit < -8))
                cout << 0;

            reverse = (reverse * 10) + lastdigit;
        }

        cout << reverse;
    
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    reverse (n); 

    return 0;
}