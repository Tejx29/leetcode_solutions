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
    
    // int maxi;

    // for(int i = 0; i < n - 1; i++) {

    //     maxi = i;

    //     for(int j = i + 1; j < n; j++) {

    //         if(arr[j] > arr[maxi]) {

    //             maxi = j;
    //         }
            
    //         i += 1;

    //     }

    //     int temp = arr[maxi];
    //     arr[maxi] = arr[i];
    //     arr[i] = temp;
    // }

    int maxi;
    
    for(int i = n - 1; i > 0; i--) {                        // Total iterations

        for(int j = 0; j < n - 1; j++) {                    // Comparison

            if(arr[j] > arr[j + 1]) {

                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }

        }
        
    }

    cout << "Bubble Sort: ";

    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";

    }

    return 0;
}