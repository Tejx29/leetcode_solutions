#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rec_insertion(vector <int> &arr, int n, int i) {
    
    if(i == n) {

        return;

    }
    
    for(int j = i; j > 0; j--) {

        if(arr[j] < arr[j - 1]) {

            swap(arr[j], arr[j - 1]);

        }

        else {

            break;

        }
    }
    
    rec_insertion(arr, n, i + 1);                         //

}



int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++) {

        cin >> arr[i];
    
    }

    int i = 0;

    rec_insertion(arr, n, i);
    

    cout << "Recursive Bubble Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}