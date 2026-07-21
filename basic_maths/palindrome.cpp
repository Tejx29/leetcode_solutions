#include<iostream>
using namespace std;

void palindrome (int n) {
    
    int reverse = 0;
    int dupn = n;

    while(n > 0) {

        int lastdigit = n % 10;

        n /= 10;

        reverse = (reverse * 10) + lastdigit;
    }

    if(reverse != dupn) {
        cout << "Not palindrome";
    }

    else {
        cout << "Palindrome";
    }
    
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    palindrome (n); 

    return 0;
}