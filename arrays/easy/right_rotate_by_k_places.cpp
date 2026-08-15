    #include <iostream>
    #include <bits/stdc++.h>

    using namespace std;

    void right_rotate_by_k_places (int arr[], int n, int k) {

        k = k % n;

        reverse(arr, arr + ( k - 1 ));

        reverse(arr + ( k - 1 ), arr + n);

        reverse(arr, arr + n);

        return;

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

        int k;

        cout << "Enter k: ";
        cin >> k;

        right_rotate_by_k_places (arr, n, k);

        for(int i = 0; i < n; i++) {

            cout << arr[i] << " ";

        }

        return 0;

    }