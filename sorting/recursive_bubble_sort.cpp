#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rec_bubble(vector <int> &arr, int n) {
    
    if(n == 1) {

        return;

    } 

    int didSwap = 0;

    int j = 0;

    while(j < n - 1) {
    
        if(arr[j] > arr[j + 1]) {

            swap(arr[j], arr[j + 1]);

            didSwap = 1; 

        }

        j = j + 1;
    }

    if(didSwap == 0) {

        return;

    }  

    rec_bubble(arr, n - 1);
}



int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    
    }

    rec_bubble(arr, n);
    

    cout << "Recursive Bubble Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}