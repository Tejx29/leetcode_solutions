#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void two_sum (vector<int> &arr, int n, int target) {

    for(int i = 0; i < n - 1; i++) {
    
        for(int j = i + 1; j < n; j++) {
    
            if(arr[i] + arr[j] == target) {
            
                cout << i << " " << j << endl;
            
            }
    
        }
    
    }

    return;
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

    int target;

    cout << "Enter target: ";
    cin >> target;

    two_sum (arr, n, target);
    
    return 0;

}