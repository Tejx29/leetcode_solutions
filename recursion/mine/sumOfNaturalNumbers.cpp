#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void sum_natural_numbers (int n, int count, int sum) {

    if(count > n) {

        cout << sum;
        return;

    }
    
    sum += count;

    count++;

    sum_natural_numbers (n, count, sum);
}

int main() {
    
    int n;
    int count = 1;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    sum_natural_numbers (n, count, sum); 

    return 0;
}