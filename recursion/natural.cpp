#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int recursion_backtrack (int n) {
    
    if(n == 0) {                         // Base condition

        return 0;

    }

    return n + recursion_backtrack(n - 1);          //Functional recursion

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << recursion_backtrack (n);

    return 0;
}