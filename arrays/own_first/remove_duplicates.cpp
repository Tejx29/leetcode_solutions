#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void ascending_check (vector<int> &v1, int arr[], int n) {
    
    for(int i = 0; i < n - 1; i++) {

        if(i == v1.size() - 1) {

            return;

        }

        if(v1[i] == v1[i + 1]) {

            v1.erase(v1.begin() + i);
        }

        if(i == v1.size()) {

            return;

        }
    }

    return;                                           //  8 8 5 5 7

}

int main () {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    vector <int> v1(n);

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> v1[i];

    }


    ascending_check(v1, arr, n);

    for(auto it : v1) {

        cout << it << " ";

    }

    return 0;

}