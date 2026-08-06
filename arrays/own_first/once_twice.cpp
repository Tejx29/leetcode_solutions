#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int once_twice (int hash[], int maxi) {

    for(int i = 0; i <= maxi; i++) {

        if(hash[i] == 1) {

            return i;

        }

    }

    return -1;

} 

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    
    int maxi = INT_MIN;

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

        if(arr[i] > maxi) {

            maxi = arr[i];

        }

    }

    int hash[maxi + 1] = {0};

    for(int i = 0; i < n; i++) {

        hash[arr[i]]++;

    }

    cout << once_twice (hash, maxi);

    return 0;

}