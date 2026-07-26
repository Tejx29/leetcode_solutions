#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(vector <int> &arr, int low, int high) {

    int pivot = arr[low];

    int i = low, j = high; 

    while(i < j) {

        while(arr[i] <= pivot && i <= high - 1) {

            i++;
        }

        while(arr[j] >= pivot && j >= low + 1) {

            j--;
        
        }

        
        if(i < j) {

            swap(arr[i], arr[j]);

        } 

    }

    swap(arr[low], arr[j]); 

    return j;

}

void quick_sort (vector <int> &arr, int low, int high) {

    if(low < high) {

        int partition_Index = partition(arr, low, high);

        quick_sort(arr, low, partition_Index - 1);

        quick_sort(arr, partition_Index + 1, high);

    }

}



int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    
    }

    int low = 0;
    int high = n - 1;

    quick_sort(arr, low, high); 

    cout << "Recursive Bubble Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}