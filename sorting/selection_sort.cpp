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
    
    int mini;

    for(int i = 0; i < n-1; i++) {

        mini = i;

        for(int j = i; j < n; j++) {

            if(arr[j] < arr[mini]) {

                mini = j;

            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
        
    }

    cout << "Selection Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}