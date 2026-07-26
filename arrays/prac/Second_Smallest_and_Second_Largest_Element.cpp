#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int s_largest (vector <int> &arr, int n) {

    int largest = arr[0];
    int s_largest = INT_MIN;                                // INT_MIN to consider all the negative values aswell                

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {

            s_largest = largest;

            largest = arr[i];

        }

        else if(arr[i] < largest && arr[i] > s_largest) {

            s_largest = arr[i];

        }
    }

    if(s_largest == INT_MIN) {

        return -1;

    }

    return s_largest;

}

int s_smallest (vector <int> &arr, int n) {

    int smallest = arr[0];
    int s_smallest = INT_MAX;                                     

    for(int i = 1; i < n; i++) {

        if(arr[i] < smallest) {

            s_smallest = smallest;

            smallest = arr[i];

        }

        else if(arr[i] > smallest && arr[i] < s_smallest) {

            s_smallest = arr[i];

        }
    }

    if(s_smallest == INT_MAX) {

        return -1;

    }

    return s_smallest;

}

int main () {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    vector <int> arr(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    cout << "Second largest: "<< s_largest(arr, n) << endl;
    cout << "Second smallest: "<< s_smallest(arr, n) << endl;

    return 0;

}