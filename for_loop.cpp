#include<iostream>
using namespace std;

/*
Given two integers low and high, return the sum of all integers from low to high inclusive.
*/

int main() {
    int low, high, sum = 0;

    cout << "Enter low and high: " << "\n";
    cin >> low >> high;

    for(int i = low; i <= high; i++) {
        sum = sum + i;
    }

    cout << sum;

    return 0;
}