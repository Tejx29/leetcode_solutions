#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int fibonacci_multi_recursion (int n) {

    if(n <= 1) {

        return n;

    }
    
    int last = fibonacci_multi_recursion(n - 1);

    int s_last = fibonacci_multi_recursion(n - 2);

    return last + s_last;
}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << fibonacci_multi_recursion(n);

    return 0;
}