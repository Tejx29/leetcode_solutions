#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> two_sum_3 (vector<int> &arr, int n, int target, map <int, int> &mpp) {

    for(int i = 0; i < n; i++) {
    
        int curr_element = arr[i];
        
        int required = target - curr_element;
        
        if(mpp.find(required) != mpp.end()) {
        
            return {mpp[required], i};            // or return 1; 
            
        }
        
        mpp[curr_element] = i;
        
    }
    
    return {-1, -1};                              // or return 0;           
}

int main () {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    map <int, int> mpp;

    cout << "Enter array elements: " << endl;

    for(int i = 0; i < n; i++) {

        cin >> arr[i];

    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    vector<int> ans = two_sum_3(arr, n, target, mpp);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    
    return 0;

}