#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int pivot_index (vector<int> &arr) {

    int n = arr.size();
    
    int total = 0;

    int lsum = 0;
    int rsum = 0;

    for(auto it : arr) {

        total += it;

    }

    for(int i = 0; i < n; i++) {

        rsum = total - lsum - arr[i];

        if(lsum == rsum) {

            return i;

        }

        lsum += arr[i];
    }

    return -1;
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

    cout << pivot_index (arr);
    
    return 0;

}