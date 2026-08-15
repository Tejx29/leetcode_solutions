#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool ascending_check (int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {

        if(arr[i + 1] < arr[i]) {

            return false;

        }
    }

    return true;
}

int main () {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    cout << ascending_check(arr, n);

    return 0;

}