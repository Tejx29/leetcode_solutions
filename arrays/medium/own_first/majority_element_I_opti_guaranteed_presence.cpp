#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int majority_element_I (vector<int> &arr, int n) {

    int element = arr[0];
    int count = 0;
    
    for(int i = 1; i < n; i++) {

        if(arr[i] == element) {

            count++;
            continue;

        }

        else {

            count--;

            if(count == 0) {

                element = arr[i];
                count = 1;
                continue;
            }
            
            continue;

        }

    }     
    
    return element;
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

    cout << majority_element_I(arr, n);
    
    return 0;

}