#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void recursion_example (int n, int count) {
    
    if(count < 1) {

        return;

    }
    
    cout << count << endl;

    count--;

    recursion_example (n, count);

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int count = n;

    recursion_example (n, count); 

    return 0;
}