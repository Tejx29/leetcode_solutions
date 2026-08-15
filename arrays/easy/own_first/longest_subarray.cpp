#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int longest_subarray_k_max (vector<int> &arr, int n, int k) {

    int sum = arr[n - 1];

    int count = 0;

    for(int i = n - 2; i >= 0; i--) {

        cout << "Enter i: " << i << endl;

        for(int j = i + 1; j > i; j--) {

            cout << "Enter j: " << j << endl;

            sum = sum + arr[i];

            cout << "Sum enter: " << sum << endl;

            if(sum == k) {

                count = j - i + 1;
                sum = arr[i];

                cout << "Sum if k: " << sum << endl;

                j--;
                break;
            }

            if(sum > k) {

                sum = arr[i + 1];

                cout << "Sum if > k: " << sum << endl;

                i++;
                j--;

                cout << "Sum if > k: i: " << i << endl;
                cout << "Sum if > k: j: " << j << endl;
                
                break;

            }

        }

    }

    return count;
}

int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int k;

    cout << "Enter k: ";
    cin >> k;

    cout << longest_subarray_k_max (arr, n, k);
    
    return 0;

}