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

    for(int i = 0; i < n; i++) {

        int didSwap = 0;

        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j+1]);

                didSwap = 1;

            }
        }

        if(didSwap == 0) {

            break;

        }

    }

    cout << "Bubble Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}