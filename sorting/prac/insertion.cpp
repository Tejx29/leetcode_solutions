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

        int j = i;

        while(j > 0 && arr[j - 1] > arr[j]) {

            swap(arr[j - 1], arr[j]);

            j--;

        }

    }

    cout << "Insertion Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }
    
    

    return 0;
}