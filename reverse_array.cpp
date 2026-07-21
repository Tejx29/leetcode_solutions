#include<iostream>
using namespace std;

/*
Given an array arr of n elements. The task is to reverse the given array. 
The reversal of array should be inplace.
*/

void reverseArray(int arr[], int n) {

    int start = 0;
    int end = n - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}