#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int once_twice (vector<int> arr, int hash[]) {

    int n = arr.size();

    for(int i = 0; i < n; i++) {

        if(hash[i] == 1) {

            return i;

        }

    }

} 

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    
    int hash[20] = {0};

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    for(int i = 0; i < n; i++) {

        hash[arr[i]]++;

    }

    cout << once_twice (arr, hash);

    return 0;

}