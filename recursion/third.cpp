#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void recursion_example (int count, int n) {
    
    if(count < 1) {

        return;

    }
    
    cout << count << endl;

    recursion_example (count - 1, n);

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int count = n;

    recursion_example (count, n); 

    return 0;
}