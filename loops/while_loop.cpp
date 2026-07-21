#include<iostream>
using namespace std;

/*
Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
A number ends with digit d if its last digit is d.

Example 1
Input: d = 1
Output: 12300

Explanation:
The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
Their sum is 12300.
*/

int main() {
    int digit;
    cin >> digit;

    int current = 1;
    int count = 1;
    int sum = 0;

    while (count <= 50) {
        if (current % 10 == digit) {
            sum += current;
            count++;
        }
        current++;
    }

    cout << sum;

    return 0;
}