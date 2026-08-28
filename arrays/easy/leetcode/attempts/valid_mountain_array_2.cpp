#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool validMountainArray(vector<int>& arr) {

    int n = arr.size();

    int up = 0;
    int down = 0;
    
    if(n < 3) {

        return false;

    }

    auto max_Val = *max_element(arr.begin(), arr.end()); 
    int max_idx = max_element(arr.begin(), arr.end()) - arr.begin();

    for(int i = 0; i < n - 1; i++) {

        if(arr[i] == arr[i + 1]) {

            return false;

        }
        
        else if(arr[i] < max_Val) {

            if(down > 0) return false;
            
            up += 1;
            continue;

        }

        else if (arr[i] < max_Val && i > max_idx) {

            if(up == 0) return false; 
            
            down += 1;
            continue;

        }

        else {

            if(up == 0) return false; 

            down += 1;
            continue;

        }

    }

    if(up == 0 || down == 0) {

        return false;

    }

    return true;
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