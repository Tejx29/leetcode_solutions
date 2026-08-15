#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int missing_num (vector<int> &arr, int N) {
    
    int xor1 = 0;
    int xor2 = 0;

    int n = N - 1;

    for(int i = 0; i < n; i++) {

        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);

    }

    xor1 = xor1 ^ N;

    return xor1 ^ xor2;
}

int main() {

    int N;

    cout << "Enter N (largest): ";
    cin >> N;

    vector<int> arr(N - 1);

    for(int i = 0; i < N - 1; i++) {

        cin >> arr[i];

    }

    cout << "Missing: " << missing_num (arr, N);
}