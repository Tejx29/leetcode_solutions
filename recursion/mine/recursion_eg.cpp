#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void recursion_example (int n, int count) {

    if(count == n) {

        return;

    }
    
    cout << count << endl;

    count++;

    recursion_example (n, count);

}

int main() {
    
    int n, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    recursion_example (n, count); 

    return 0;
}