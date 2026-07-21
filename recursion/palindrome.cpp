#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

bool palindrome_recursion (string str, int start, int end) {
    
    if(start > end / 2) {
        return true;
    }

    cout << start << " " << end << endl;

    if(str[start] == str[end]) {

        return palindrome_recursion (str, start + 1, end - 1);

    }

    else {
        
        return false;
    }
}

int main() {
    
    string str = "ADA";

    int i = 0;
    int start = i;
    int end = size(str) - i - 1;

    cout << palindrome_recursion(str, start, end);

    return 0;
}