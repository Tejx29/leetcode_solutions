#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void recursion_backtrack (int count, int n) {
    
    if(count > n) {                         // Base condition

        return;

    }

    recursion_backtrack (count + 1, n);

    cout << count << endl;                  //Printing after recursion, ensuring last function call gets printed first

}

int main() {
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int count = 1;

    recursion_backtrack (count, n); 

    return 0;
}