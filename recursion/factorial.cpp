#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int factorial_backtrack (int n) {
    
    if(n == 0) {                         // Base condition

        return n + 1;

    }

    return n * factorial_backtrack(n - 1);          //Functional recursion

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n; 

    cout << factorial_backtrack (n);

    return 0;
}