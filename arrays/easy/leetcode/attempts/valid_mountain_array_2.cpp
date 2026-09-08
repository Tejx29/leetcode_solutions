#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>& arr) {

    int n = arr.size();

    
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

    cout << validMountainArray (arr);
    
    return 0;

}