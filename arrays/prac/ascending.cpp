#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ascending_check (int arr[], int n) {

    int j = 0;

    if(n == 1) {

        cout << "True";
        return;

    }

    while(j < n - 1 && arr[j + 1] >= arr[j]) {

        if(j == n - 2) {

            break;

        }

        j++;

    }

    if(arr[j + 1] < arr[j]) {

        cout << "False" << endl;
        return;

    }

    cout << "True" << endl; 
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

    ascending_check(arr, n);

    return 0;

}