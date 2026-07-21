#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void recursion_example (int count, int n) {

    if(count > n) {

        return;

    }
    
    cout << "Tejas" << endl;

    recursion_example (count + 1, n);

}

int main() {
    
    int n, count = 1;

    cout << "Enter a number: ";
    cin >> n;

    recursion_example (count, n); 

    return 0;
}