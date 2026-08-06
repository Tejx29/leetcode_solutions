#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int once_twice(vector<int> &arr, int n) {

    int xor1 = arr[0];

    for(int i = 1; i < n; i++) {

        xor1 = xor1 ^ arr[i];

    }

    return xor1;
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    cout << once_twice (arr, n);

    return 0;

}