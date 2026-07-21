#include<iostream>
using namespace std;

void armstrong (int n) {
    
    int sum = 0;
    int dupn = n;

    int temp = n;
    int digits = 0;

    while(temp > 0) {

        digits++;
        temp /= 10;

    }

    while(n > 0) {

        int lastdigit = n % 10;

        int power = 1;

        for(int i = 1; i <= digits; i++) {

            power = power * lastdigit;

        }

        sum += power;
        
        n /= 10;
    }

    if(sum != dupn) {
        cout << "Not armstrong";
    }

    else {
        cout << "Armstrong";
    }
    
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    armstrong (n); 

    return 0;
}