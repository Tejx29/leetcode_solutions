#include<iostream>
using namespace std;

void digits (int n) {

    int count = 0;
    
    while (n > 0) {

        n = n / 10;

        count++;
    }

    cout << "Digits: " << count;
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    digits (n); 

    return 0;
}