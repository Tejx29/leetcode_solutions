#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int once_twice(vector<int> &arr, int n) {

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {

        if(i == n - 1) {

            return arr[i];

        }

        if((arr[i] ^ arr[i + 1]) == 0) {

            i++;
            continue;

        }

        return arr[i];

    }

    return -1;

}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    cout << once_twice (arr, n);

    return 0;

}