#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>& arr) {

    int n = arr.size();

    int max = 0;

    if(n < 3) {

        return false;

    }

    for(int i = 0; i < n - 1; i++) {

        if(arr[i + 1] > arr[i]) {

            if(max > 0) {

                return false;

            }

            continue;

        }

        else if(arr[i + 1] < arr[i]) {

            if(i == 0) return false;

            max = arr[i];

            continue;

        }

        else {

            return false;

        }

    }

    if(max == 0) {

        return false;

    }

    else {

        return true;
    
    }
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