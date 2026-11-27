#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() { 

    int n;

    cout << "Enter row: ";
    cin >> n;

    long long result = 1;

    cout << result << " ";

    for(int i = 1; i < n; i++) {

        result = result * (n - i);

        result = result / i;

        cout << result << " ";

    }

}