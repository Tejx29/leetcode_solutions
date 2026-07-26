#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int largest = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > largest) {

            largest = arr[i];

        }

    }

    cout << "Largest: " << largest;

    return 0;

}